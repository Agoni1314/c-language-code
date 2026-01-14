#include"Heap.h"

void fun1()
{
	int arr[] = { 4,2,8,1,5,6,7,9};
	HP hp;
	HPInit(&hp);
	for (size_t i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		HPPush(&hp, arr[i]);
	}
	int i = 0;
	while (!HPEmpty(&hp))
	{
		printf("%d ", HPTop(&hp));
		HPPop(&hp);
	}
}
void func3(int* data, int n)
{
	//建堆
	for (int i = (n - 1 - 1)/2; i >= 0; i--)
	{
		AdjustDown(data, n, i);
		printf("第%d次调整:", n - i);
		for (int j = 0; j < n; j++)
		{
			printf("%d ", data[j]);
		}
		printf("\n");
	}
	printf("\n");
	int end = n - 1;
	while (end > 0)
	{
		Swap(&data[0], &data[end]);
		AdjustDown(data, end,0);
		printf("第%d次调整:",n-end);
		for (int j = 0; j < n; j++)
		{
			printf("%d ", data[j]);
		}
		printf("\n");
		--end;
	}

}
void func2()
{
	int data[] = { 5,8,1,9,7,2,4,3,6,0 };//给了元素就只能使用向下调整
	func3(data, sizeof(data) / sizeof(int));
}
int main()
{
	//fun1();
	func2();
	return 0;
}