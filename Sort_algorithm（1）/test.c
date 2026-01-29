#define  _CRT_SECURE_NO_WARNINGS
#include"Sort.h"
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
	int a[] = {3,5,7,1,2,4,6,9,8 };
	int sc = sizeof(a) / sizeof(a[0]);
	PrintSort(a, sc);
	SelectSort(a, sc);
	PrintSort(a, sc);

}
int main()
{
	//TestInsertSort();
	//TestsHellSort();
	TestSelectSort();
	return 0;
}