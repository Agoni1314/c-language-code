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
	int n = 1000;
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
int compare(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}
//返回实际读到的数据个数，如果没有数据就返回
int  ReadNDataSortToFile(FILE* fout, int n, const char* file1)
{
	int x = 0;
	int* a = (int*)malloc(sizeof(int) * n);
	if (a == NULL)
	{
		free(a);
		return 0;
	
	}
	//想读到n个数据，如果遇到文件结束，就读取j个
	int j = 0;
	while(j<n&& fscanf(fout, "%d", &x)==1)
	{
		a[j++] = x;
	}
	if (j == 0)
	{
		free(a);
		return 0;
	
	}
	qsort(a, j, sizeof(int), compare);
	FILE* fin = fopen(file1, "w");
	if (fin == NULL)
	{
		perror("fopen");
		free(a);
		return 0;
	}
	//写会file1文件
	for (int i = 0; i < j; i++)
	{
		fprintf(fin, "%d\n", a[i]);
	}
	free(a);
	fclose(fin);
	return j;

}
void MergeFile(const char* file1, const char* file2, const char* mfile)
{
	FILE* fout1 = fopen(file1, "r");
	if (fout1 == NULL)
	{
		perror("fout");
		return;
	}
	FILE* fout2 = fopen(file2, "r");
	if (fout2 == NULL)
	{
		perror("fout");
		return;
	}
	FILE* mfout = fopen(mfile, "w");
	if (mfout == NULL)
	{
		perror("fout");
		return;
	}
	//归并
	int x1 = 0, x2 = 0;
	int ret1 = fscanf(fout1, "%d", &x1);
	int ret2 = fscanf(fout2, "%d", &x2);
	while (ret1 != EOF && ret2 != EOF)
	{
		if (x1 < x2)
		{
			fprintf(mfout, "%d\n", x1);
			 ret1 = fscanf(fout1, "%d", &x1);

		}
		else
		{
			fprintf(mfout, "%d\n", x2);
			 ret2 = fscanf(fout2, "%d", &x2);
		}
	}
	while (ret1 != EOF)
	{
		fprintf(mfile, "%d\n", x1);
		ret1 = fscanf(fout1, "%d", &x1);
	}
	while (ret2 != EOF)
	{
		fprintf(mfile, "%d\n", x2);
		ret2 = fscanf(fout2, "%d", &x2);
	}
	fclose(fout1);
	fclose(fout2);
	fclose(mfout);
}
int main()
{
	
	const char* file1 = "file1.txt";
	const char* file2 = "file2.txt";
	const char* mfile = "mfile.txt";
	FILE* fout = fopen("data.txt", "r");
	if (fout == NULL)
	{
		perror("fopen");
		return;
	}
	ReadNDataSortToFile(fout,100,file1);
	ReadNDataSortToFile(fout, 100, file2);
	while (1)
	{
		MergeFile(file1, file2, mfile);
		remove(file1);
		remove(file2);
		//重命名mfile为file1
		rename(mfile, file1);
		//当再去读取数据，一个都读不到，说明已经没有数据了，最后返回file1
		if(ReadNDataSortToFile(fout, 100, file2)==0);
		break;
	}

	return 0;
}

//TestInsertSort();
	//TestShellSort();
	//TestSecteSort();
	//TestQuickSort();
	//TestMageSort();
	//TestMageSortNonR();
	 //CreateNData();