#define  _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"

////void SLTest01()//测试初始化是否正确
////{
////	SL sl;
////	SLInit(&sl);
////	//测试尾插
////	SLPushBack(&sl,1);
////	SLPushBack(&sl,2);
////	SLPushBack(&sl,3);
////	SLPushBack(&sl,4);
////	SLPushBack(&sl,5);//如果传递的是空指针,就需要用到断言
////	SLPrint(sl);
////	//测试尾删
////	SLPopBack(&sl);
////	/*SLPushFront(&sl, 6);
////	SLPushFront(&sl, 7);*/
////	SLPrint(sl);
////	SLPopFront(&sl);
////	SLPrint(sl);
////	SLDestroy(&sl);
////	
////	
////	
////
////}
////
////void SLTest02()
////{
////	SL sl;
////	SLInit(&sl);
////	SLPushBack(&sl, 1);
////	SLPushBack(&sl, 2);
////	SLPushBack(&sl, 3);
////	SLPushBack(&sl, 4);
////	SLPrint(sl);
////	SLInsert(&sl, 0,  66);//中间的参数代表下标
////	SLPrint(sl);
////	SLInsert(&sl, sl.size, 99);
////	SLPrint(sl);
////	SLErase(&sl,0);
////	SLPrint(sl);
////	int ret=SLFind(&sl, 4);
////	if (ret < 0)
////	{
////		printf("没找到\n");
////	}
////	else
////	{
////		printf("找到了:%d\n", ret);
////	}
////	SLDestroy(&sl);
//
//
////}
////通讯录的测试
//void ContactTest01()
//{
//	Contact con;//创建的通讯录对象，实际上就是顺序表对象，等价于SL sl
//	ContactInit(&con);
//	ContactAdd(&con);
//	ContactShow(&con);
//    //ContactDel(&con);
//	//ContactShow(&con);
//	ContactFind(&con);
//	ContactShow(&con);
//	ContactDes(&con);//销毁
//
//
//}
//
//
//int main()
//{
//	//SLTest01();
//	//SLTest02();
//	ContactTest01();
//	
//
//		return 0;
//}
void menu()
{
	printf("********************************************\n");
	printf("*************-----通讯录----****************\n");
	printf("*************1.增加   2.删除****************\n");
	printf("*************3.修改   4.查找****************\n");
	printf("*************5.展示   6.退出****************\n");
	printf("********************************************\n");
	
}
int main()
{
	int q = 1;
	Contact con;//先定义一个通讯录的对象
	ContactInit(&con);//再调用通讯录初始化
	do
	{
		
		menu();
		printf("请选择你的操作\n");
		scanf("%d",&q);
		switch (q )
		{
		case 1:
			ContactAdd(&con);
		case 2:
			ContactDel(&con);
			break;
		case 3:
			ContactModify(&con);
			break;
		case 4:
			ContactFind(&con);
			break;
		case 5:
			ContactShow(&con);
		case 6:
			printf("退出通讯录\n");
			break;
		default:
			break;
		}
	} while (q!=0);
	//根据不同的q来选择操作
	
	return 0;
}