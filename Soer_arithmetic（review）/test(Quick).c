#define  _CRT_SECURE_NO_WARNINGS
#include"test.h"
//排序算法一定要多拿几组数据测试!!!
void TestInsertSort()
{
	int arr[] = { 3,6,1,2,8,9,10,5,4,7 };
	int sc = sizeof(arr) / sizeof(arr[0]);
	PrintSort(arr, sc);
	IsertSort(arr, sc);
	PrintSort(arr, sc);
}
void TestShellSort()
{
	int arr[] = { 3,6,1,2,8,9,10,5,4,7 };
	int sc = sizeof(arr) / sizeof(arr[0]);
	PrintSort(arr, sc);
	ShellSort(arr, sc);
	PrintSort(arr, sc);
}
void TestSecteSort()
{
	int arr[] = { 6,7,1,2,3,5,7,9,0,10};
	int sc = sizeof(arr) / sizeof(arr[0]);
	PrintSort(arr, sc);
	SelectSort(arr, sc);
	PrintSort(arr, sc);
}
void TestQuickSort()
{
	int arr[] = { 6,7,1,2,3,5,7,9,0,10 };
	int sc = sizeof(arr) / sizeof(arr[0]);
	PrintSort(arr, sc);
	QuickSort(arr, 0,sc-1);
	PrintSort(arr, sc);
}
int main()
{
	
	//TestInsertSort();
	//TestShellSort();
	//TestSecteSort();
	TestQuickSort();
	return 0;
}