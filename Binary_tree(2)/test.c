#include"Heap.h"

void TestHeap1()
{
	int data[] = { 4,2,8,1,5,6,9,7 ,2,23,55};
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
	//½¨¶Ñ
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
		--end;
	}
}
void TestHeap2()
{
	int data[] = { 4,2,8,1,5,6,9,7};
	HeapSort(data, sizeof(data) / sizeof(int));
}
int main()
{
	//TestHeap1();
	TestHeap2();
	return 0;
}