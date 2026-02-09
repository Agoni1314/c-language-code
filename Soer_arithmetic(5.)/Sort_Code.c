#define  _CRT_SECURE_NO_WARNINGS
#include"test.h"
void PrintSort(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
//插入
void IsertSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		//[0,end]之间有序，end+1的值插入进入
		int tmp = a[end + 1];//int tmp = end + 1;要用值比较大小，不是用下标
		while (end >= 0)
		{
			if (a[end] > tmp)
			{
				//tmp = a[end];tmp是中间变量，会出错
				a[end + 1] = a[end];
				--end;
			}
			else
			{
				break;
				
			}
		}
		a[end + 1] = tmp;
		//可有可无
		/*if (a[end] == -1)
		{
			a[end + 1] = tmp;
		}*/
	}
}
//希尔
void ShellSort(int* a, int n)
{
	//int gap = 3;
	//for (int j = 0; j<gap; j++)
	//{
	//	for (int i =j ; i < n - gap; i += gap)
	//	{
	//		//int end = 0;
	//		int end = i;//end是需要变化的值
	//		int tmp = a[end + gap];
	//		while (end >= 0)
	//		{
	//			if (a[end] > tmp)
	//			{
	//				a[end + gap] = a[end];
	//				end -= gap;
	//			}
	//			else
	//			{
	//				break;
	//			}
	//		}
	//		a[end + gap] = tmp;
	//	}
	//}
	int gap = n;
	while (gap > 1)
	{
		gap = gap / 3 + 1;
		for (int i = 0; i < n - gap; ++i)
		{
			//int end = 0;
			int end = i;//end是需要变化的值
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (a[end] > tmp)
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
	}
	
}
void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
//选择
void SelectSort(int* a, int n)
{
	int begin = 0, end = n - 1;
	while(begin<end)
	{
		int mini = begin, maxi = begin;
		for (int i = begin + 1; i <= end; ++i)
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
		Swap(&a[end], &a[maxi]);
		if (mini == end)
		{
			mini = maxi;
		}
		Swap(&a[begin], &a[mini]);
		
		begin++;
		end--;
	}
}
int Gmtmidi(int* a, int left, int right)
{
	int midi = (left + right) / 2;
	if (a[left] < a[midi])
	{
		if (a[midi] < a[right])
		{
			return midi;
		}
		else if (a[midi] > a[right])
		{
			return right;
		}
		else
		{
			return left;
		}
	}
	else//a[left]>a[midi]
	{
		if (a[left] < a[right])
		{
			return left;
		}
		else if (a[midi] > a[right])
		{
			return right;
		}
		else
		{
			return midi;
		}
	}
	
}
void QuickSort(int* a, int left, int right)
{
	if (left >= right)
		return;
	if ((right - left + 1) < 10)//小区间优化
	{
		IsertSort(a + left, right - left + 1);
	}
	else
	{
		int keyi = PartSort2(a, left, right);
		QuickSort(a, left, keyi - 1);
		QuickSort(a, keyi + 1, right);
	}
	
}
//指针
int PartSort2(int* a, int left, int right)
{
	int midi = Gmtmidi(a, 0, right);
	int keyi = left;
	Swap(&a[left], &a[midi]);
	int prev = left;
	int cur = prev + 1;
	while (cur <= right)
	{
		if (a[cur] < a[keyi]&& ++prev!=cur)
		{
			
			Swap(&a[cur], &a[prev]);
		}
		++cur;
	}
	Swap(&a[keyi], &a[prev]);
	return prev;
}
//hoare
int PartSort1(int* a, int left, int right)
{
	int midi = Gmtmidi(a, 0, right);
	int keyi = left;
	Swap(&a[keyi], &a[midi]);
	int begin = left, end = right;
	while (begin < end)
	{
		while (begin < end && a[end] >= a[keyi])
		{
			--end;
		}
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
//归并
void _MageSort(int* a, int* tmp, int begin, int end)
{
	if (begin >= end)
		return;
	int mid = (begin + end) / 2;
	_MageSort(a, tmp, begin, mid );
	_MageSort(a, tmp, mid+1, end);
	//归并
	int begin1 = begin, end1 = mid;
	int begin2 = mid+1, end2 = end;
	int i = begin;
	while (begin1<=end1 && begin2<=end2)
	{
		if (a[begin1] < a[begin2])
		{
			tmp[i++] = a[begin1++];
		}
		else
		{
			tmp[i++] = a[begin2++];
		}
	}
	if (begin1 <= end1)
	{
		tmp[i++] = a[begin1];
	}
	if (begin2 <= end2)
	{
		tmp[i++] = a[begin2];
	}
	memcpy(a + begin, tmp + begin, (end - begin + 1) * sizeof(int));
}
void MageSort(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (tmp == NULL)
		return;
	_MageSort(a, tmp, 0, n - 1);
	free(tmp);
	tmp == NULL;
}
void MageSortNonR(int* a, int n)
{
	int* tmp = malloc(sizeof(int) * n);
	if (tmp == NULL)
	{
		perror("malloc");
		return;
	}
	int gap = 1;//gap每组归并的个数
	while (gap < n)
	{
		for (int i = 0; i < n; i+=2*gap)
		{
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + 2 * gap - 1;
		/*	if (end1 >= n)
			{
				end1 = n - 1;
			}*/
			if (begin2 >= n)
			{
				break;
			}
			if (end2 >= n)
			{
				end2 = n - 1;
			}
			int j = i;
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (a[begin1] < a[begin2])
				{
					tmp[j++] = a[begin1++];
				}
				else
				{
					tmp[j++] = a[begin2++];
				}
			}
			while (begin1 <= end1)
			{
				tmp[j++] = a[begin1++];
			}
			while (begin2 <= end2)
			{
				tmp[j++] = a[begin2++];
			}
			memcpy(a + i, tmp + i, (end2 - i + 1) * sizeof(int));
		}
		gap *= 2;
	}
	free(tmp);
	tmp == NULL;
}
