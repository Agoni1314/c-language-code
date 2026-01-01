#include"cs.h"
void SLTest01()
{
	SL sl;
	SLInit(&sl);
		SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPushBack(&sl, 5); 
		SLPrint(sl);
		SLPopBack(&sl);
	/*SLPushFront(&sl, 6);
	SLPushFront(&sl, 7);*/
	SLPrint(sl);
	SLPopFront(&sl);
	SLPrint(sl);
	SLDestroy(&sl);




}

void SLTest02()
{
	SL sl;
	SLInit(&sl);
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPrint(sl);
	SLInsert(&sl, 0, 66); 
		SLPrint(sl);
	SLInsert(&sl, sl.size, 99);
	SLPrint(sl);
	SLErase(&sl, 0);
	SLPrint(sl);
	int ret = SLFind(&sl, 99);
	if(ret< 0)
	{
		printf("没找到\n");
	}
	else
	{
		printf("找到了:%d\n", ret);
	}
	SLDestroy(&sl);


}
int main()
{
	SLTest01();
	SLTest02();


	return 0;
}