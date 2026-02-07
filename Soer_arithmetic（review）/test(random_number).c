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
void TestMageSort()
{
	int arr[] = { 6,7,1,2,3,5,7,9,0,10 };
	int sc = sizeof(arr) / sizeof(arr[0]);
	PrintSort(arr, sc);
	MageSort(arr, sc);
	PrintSort(arr, sc);
}
void TestMageSortNonR()
{
	int arr[] = { 6,7,1,2,3,5,7,9,0,10 };
	int sc = sizeof(arr) / sizeof(arr[0]);
	PrintSort(arr, sc);
	MageSortNonR(arr, sc);
	PrintSort(arr, sc);
}
void CreateNData()
{
	//造数据
	int n = 100000;
	srand(time(0));
	const char* file = "data.txt";
	FILE* fin = fopen(file, "w");
	if (fin == NULL)
	{
		perror("fopen");
		return;
	}
	for (int i = 0; i < n; ++i)
	{
		int x = (rand() + i) % 1000000;//重复量较小
		//int x = rand();重复量较多
		fprintf(fin, "%d\n", x);
	}
	fclose(fin);
}
int main()
{
	//TestInsertSort();
	//TestShellSort();
	//TestSecteSort();
	//TestQuickSort();
	//TestMageSort();
	//TestMageSortNonR();
	 CreateNData();
	return 0;
}

