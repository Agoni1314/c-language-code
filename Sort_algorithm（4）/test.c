#define  _CRT_SECURE_NO_WARNINGS
#include"Sort.h"
#include"cs.h"
void TestInsertSort()
{
	int a[] = { 7,8,3,5,4,1,2,6,9 };
	int sc = sizeof(a) / sizeof(a[0]);
	InsertSort(a, sc);
	PrintSort(a, sc);

}
void TestsHellSort()
{
	int a[] = { 7,8,3,5,4,1,2,6,9,5,4,1,2,6,12,34,65,13,8,54,23,12,435,567,657,20 };
	int sc = sizeof(a) / sizeof(a[0]);
	PrintSort(a, sc);
	ShellSort(a, sc);

	
}
void TestSelectSort()
{
	int a[] = {9,1,2,5,7,4,6,3,10,8};
	int sc = sizeof(a) / sizeof(a[0]);
	PrintSort(a, sc);
	SelectSort(a, sc);
	PrintSort(a, sc);

}
void TestQuickSort()
{
	int a[] = { 9,1,2,5,7,4,6,3 };
	int sc = sizeof(a) / sizeof(a[0]);
	PrintSort(a, sc);
	QuickSort(a, 0, sc-1);
	PrintSort(a, sc);
}
void TestQuickSortNonR()
{
	int a[] = { 9,1,2,5,7,4,6,3 };
	int sc = sizeof(a) / sizeof(a[0]);
	PrintSort(a, sc);
	QuickSortNonR(a, 0, sc - 1);
	PrintSort(a, sc);
}
void TestMergeSort()
{
	int a[] = {6,1,2,7,9,3,4,5,10,8 };
	int sc = sizeof(a) / sizeof(a[0]);
	PrintSort(a, sc);
	MergeSortNonR(a, sc);
	PrintSort(a, sc);
}
void TestMergeSortNonR()
{
	int a[] = { 6,1,2,7,9,3,4,5,10,8 };
	int sc = sizeof(a) / sizeof(a[0]);
	PrintSort(a, sc);
	MergeSortNonR(a, sc);
	PrintSort(a, sc);
}
void TestCountSort()
{
	int a[] = { 2,1,2,7,9,3,4,7,10,8 };
	int sc = sizeof(a) / sizeof(a[0]);
	PrintSort(a, sc);
	MergeSortNonR(a, sc);
	PrintSort(a, sc);
}
int main()
{
	//TestInsertSort();
	//TestsHellSort();
	//TestSelectSort();
	//TestQuickSort();
	//TestQuickSortNonR();
	//TestMergeSort();
	//TestMergeSortNonR();
	TestCountSort();
	return 0;
}