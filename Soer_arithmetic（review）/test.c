#define  _CRT_SECURE_NO_WARNINGS
#include"test.h"
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
int main()
{
	
	//TestInsertSort();
	TestShellSort();
	return 0;
}