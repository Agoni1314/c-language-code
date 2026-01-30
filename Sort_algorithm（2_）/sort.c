#include"Sort.h"
void PrintSort(int* a, int n)
{
	for (int j = 0; j < n; j++)
	{
		printf("%d ", a[j]);
	}
	printf("\n");
}
void InsertSort(int* a, int n)
{
	//[0,end]有序，end+1位置的值插入进去
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if (tmp < a[end])
			{
				a[end + 1] = a[end];
				--end;
			}
			else
			{
				break;
			}
		}
		a[end + 1] = tmp;
	}
}
//希尔
void ShellSort(int* a, int n)
{
	//int gap = 3;
	/*for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < n - gap; i += gap)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (tmp < a[end])
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;
		}
	}*/
	int gap = n;
	while (gap > 1)
	{
		//+1保证最后一个gap一定是1
		//gap>1时是预排序
		//gap==1时是插入排序
		gap = gap / 3+1;
		for (int i = 0; i < n - gap; ++i)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (tmp < a[end])
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;
		} 
		printf("gap:%2d\n", gap);
		PrintSort(a, n);
	}	
}
void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
//选择
void SelectSort(int* a, int n)
{
	int begin = 0, end = n - 1; 
	while (begin < end)
	{
		int mini = begin, maxi = begin;
		for (int i = begin + 1; i <= end; i++)
		{
			if (a[i] > a[maxi])
			{
				maxi = i;
			}
			if (a[i] < a[mini])
			{
				mini = i;
			}
		}
		Swap(&a[begin], &a[mini]);
		if (begin == maxi)
		{
			maxi = mini;
		}
		Swap(&a[end], &a[maxi]);
		++begin;
		--end;
	}
}
int GetMidi(int* a, int left, int right)
{
	int midi = (left + right) / 2;
	if (a[left] < a[midi])
	{
		if (a[midi] < a[right])
		{
			return midi;
		}
		else if (a[left]<a[right])
		{
			return right;
		}
		else
		{
			return left;
		}
	}
	else
	{
		if (a[midi] > a[right])
		{
			return midi;
		}
		else if (a[left] < a[right])
		{
			return left;
		}
		else
		{
			return right;
		}
	}
}
//快排
//避免有序情况下的效率退化，随机选key，三数取中
void QuickSort(int* a, int left,int right)
{
	int midi = GetMidi(a, left, right);
	if (left >= right)
		return;
	//小区间优化，不再递归分割排序，减少递归的次数
	if ((right - left + 1) < 10)
	{
		InsertSort(a + left, right - left + 1);
	}
	else
	{
		int keyi = left;
		int begin = left, end = right;
		while (begin < end)
		{
			//右边找小
			while (begin < end && a[end] >= a[keyi])
			{
				--end;
			}
			//左边找大
			while (begin < end && a[begin] <= a[keyi])
			{
				++begin;
			}
			Swap(&a[begin], &a[end]);
		}
		Swap(&a[keyi], &a[begin]);
		keyi = begin;
		QuickSort(a, left, keyi - 1);
		QuickSort(a, keyi + 1, right);
	}

}

