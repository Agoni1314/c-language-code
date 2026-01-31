#include"Sort.h"
#include"cs.h"
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
	
	if (left >= right)
		return;
	//小区间优化，不再递归分割排序，减少递归的次数
	if ((right - left + 1) < 10)
	{
		InsertSort(a + left, right - left + 1);
	}
	else
	{
		//三数取中
		
		int keyi =PartSort2(a, left, right);
		QuickSort(a, left, keyi - 1);
		QuickSort(a, keyi + 1, right);
	}

}
//hoare
int  PartSort1(int* a, int left, int right)
{
	//三数取中
	int midi = GetMidi(a, left, right);
	Swap(&a[left], &a[midi]);
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
	return begin;
}
//前后指针
int  PartSort2(int* a, int left, int right)
{
	//三数取中
	int midi = GetMidi(a, left, right);
	Swap(&a[left], &a[midi]);
	int keyi = left;
	int prev = left;
	int cur = prev + 1;
	while (cur <= right)
	{
		if (a[cur] < a[keyi]&&++prev!=cur)
		{
			++prev;
			Swap(&a[prev], &a[cur]);
		}
		cur++;
	}
	Swap(&a[prev], &a[keyi]);
	return prev;
}
//非递归
void QuickSortNonR(int* a, int left, int right)
{
	ST st;
	STInit(&st);
	STPush(&st, right);
	STPush(&st, left);
	while (!STEmpty(&st))
	{
		int begin = STTop(&st);
		STPop(&st);
		int end = STTop(&st);
		STTop(&st);
		int keyi = PartSort2(a, begin, end);
		if (keyi + 1 < end)
		{
			STPush(&st, end);
			STPush(&st, keyi+1);
		}
		if (begin < keyi - 1)
		{
			STPush(&st, keyi-1);
			STPush(&st, begin);
		}
	}
	STDestroy(&st);
}


void _MergeSort(int* a, int* tmp, int begin, int end)
{
	if (begin == end)
		return;
	int mid = (begin + end) / 2;
	//如果[begin,mid-1][mid,end]有序就可以进行归并
	/*_MergeSort(a, tmp, begin, mid - 1);
	_MergeSort(a, tmp, mid,end);*/
	_MergeSort(a, tmp, begin, mid);
	_MergeSort(a, tmp, mid+1, end);
	//归并
	/*int begin1 = begin, end1 = mid - 1;
	int begin2 = mid, end2 = end;*/
	int begin1 = begin, end1 = mid;
	int begin2 = mid+1, end2 = end;
	int i = begin;
	while (begin1<=end1&&begin2<=end2)
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
	while (begin1 <= end1)
	{
		tmp[i++] = a[begin1++];
	}
	while(begin2<=end2)
	{
		tmp[i++] = a[begin2++];
	}
	memcpy(a+begin, tmp+begin,(end - begin + 1)*sizeof(int));
}
//归并
void MergeSort(int* a, int n)
{
	int* tmp = malloc(sizeof(int) * n);
	if (tmp == NULL)
	{
		perror("malloc");
		return;
	}
	_MergeSort(a, tmp, 0, n - 1);
	free(tmp);
	tmp = NULL;
}
void MergeSortNonR(int* a, int n)
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
		for (int i = 0; i < n; i += 2 * gap)
		{
			//[begin1,end1][begin2,end2]
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + 2 * gap - 1;
			if (end1 >= n)
			{
				end1 = n - 1;
			}
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
			memcpy(a + i, tmp + i, sizeof(int) * (end2 - i + 1));
		}
		gap *= 2;
	}
	free(tmp);
	tmp = NULL;
}