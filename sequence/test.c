#include"SeqList.h"
void SLTest01()//测试初始化是否正确
{
	SL sl;
	SLInit(&sl);
	//测试尾插
	SLPushBack(&sl,1);
	SLPushBack(&sl,2);
	SLPushBack(&sl,3);
	SLPushBack(&sl,4);
	SLPushBack(&sl,5);//如果传递的是空指针,就需要用到断言
	SLPrint(sl);
	//测试尾删
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
	SLInsert(&sl, 0,  66);//中间的参数代表下标
	SLPrint(sl);
	SLInsert(&sl, sl.size, 99);
	SLPrint(sl);
	SLErase(&sl,0);
	SLPrint(sl);
	int ret=SLFind(&sl, 4);
	if (ret < 0)
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