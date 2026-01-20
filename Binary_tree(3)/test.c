#define  _CRT_SECURE_NO_WARNINGS
#include"Heap.h"
#include<time.h>
void TestHeap1()
{
	int data[] = { 4,2,8,1,5,6,9,3 };
	HP hp;
	HPInit(&hp);
	for (int i = 0; i < sizeof(data) / sizeof(data[0]); i++)
	{
		HPPush(&hp, data[i]);
	}
	int i = 0;
	while (!HPEmpty(&hp))
	{
		printf("%d ", HPTop(&hp));
		//data[i++] = HPTop(&hp);
		HPPop(&hp);
	}
	HPDestroy(&hp);
}
void HeapSort(int* a, int n)
{
	//建堆
	/*for (int i = 0; i < n; i++)
	{
		Adjustup(a,i);
	}*/
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(a, n, i);
	}
	int end = n - 1;
	while(end>0)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);
		printf("第 %d 轮调整后：", n - end);
		for (int i = 0; i < n; i++)
		{
			printf("%d ", a[i]);
		}
		printf("\n");
		--end;
	}
}
void TestHeap2()
{
	int data[] = { 4,2,8,1,5,6,9,7,0};
	HeapSort(data, sizeof(data) / sizeof(int));//数组名就是数组首元素地址
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
void TestHeap3()
{
	int k;
	printf("请输入k>");
	scanf("%d", &k);
	int* kminheap = (int*)malloc(sizeof(int) * k);
	if (kminheap == NULL)
	{
		perror("kminheap");
		return;
	}
	const char* file = "data.txt";
	FILE* fin = fopen(file, "r");
	if (fin == NULL)
	{
		perror("fopen");
		return;
	}
	//读取文件中的前k个数
	for (int i = 0; i < k; i++)
	{
		int x = rand() + i;
		fscanf(fin,"%d", &kminheap[i]);
	}
	//用k个数建一个小堆
	for (int i = (k - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(kminheap, k, i);
	}
	//读取剩下的n-k个数
	int x = 0;
	while (fscanf(fin,"%d", &x)>0)
	{
		if (x > kminheap[0])
		{
			kminheap[0] = x;
			AdjustDown(kminheap, k, 0);
		}
	}
	printf("最大的前%d个数:",k);
	for (int i = 0; i < k; i++)
	{
		printf("%d ", kminheap[i]);
	}
	printf("\n");
}
int main()
{
	//stHeap1();
	//TestHeap2();
	//Topk问题
	//CreateNData();
	TestHeap3();
	return 0;
}