#include"Heap.h"

void TestHeap1()
{
	int data[] = { 4,2,8,1,5,6,9,7 };
	HP hp;
	HPInit(&hp);
	for (int i = 0; i < sizeof(data) / sizeof(data[0]); i++)
	{
		HPPush(&hp, data[i]);
	}
	while (!HPEmpty(&hp))
	{
		printf("%d ", HPTop(&hp));
		HPPop(&hp);
	}
}
int main()
{
	TestHeap1();
	return 0;
}