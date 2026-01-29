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
//快速
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
		Swap(&a[end], &a[maxi]);
		++begin;
		--end;
	}
}

