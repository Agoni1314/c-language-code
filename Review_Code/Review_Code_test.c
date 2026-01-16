#include"Review_Code.h"
void func1()
{
	SL sl;
	SLInit(&sl);
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPrint(&sl);
	SLPushFront(&sl, 5);
	SLPrint(&sl);
	SLPopBack(&sl);
	SLPrint(&sl);
	SLPopFront(&sl);
	SLPrint(&sl);
	SLInsert(&sl, 1, 77);
	SLPrint(&sl);
	SLErase(&sl, 2);
	SLPrint(&sl);
	int ret=SLFind(&sl, 3);
	if (ret < 0)
	{
		printf("没找到\n");
	}
	else
	{
		printf("找到了\n");
	}
	SLDestroy(&sl);
}
int main()
{
	func1();
	return 0;
}