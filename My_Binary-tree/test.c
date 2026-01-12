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
int main()
{
	fun1();
	return 0;
}