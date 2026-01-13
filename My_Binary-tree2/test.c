#include"Heap.h"

void fun1()
{
	int arr[] = { 3,4,7,6,1,5,9,8 };
	HP hp;
	HPInit(&hp);
	for (size_t i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
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
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(data, n, i);
	}
	int subscript = n - 1;
	while (subscript > 0)
	{
		Swap(&data[0], &data[subscript]);
		AdjustDown(data, subscript, 0);
		printf("第%d调整:", n - subscript);//n不变，变的是 subscript
		for (int i = 0; i < n; i++)
		{
			printf("%d ", data[i]);
		}
		printf("\n");
		--subscript;
	}

}
void func2()
{
	int data[] = { 5,8,1,9,7,2,4,3,6,0};
	func3(data, sizeof(data) / sizeof(int));
}
int main()
{
	//fun1();
	func2();
	return 0;
}