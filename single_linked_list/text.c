#include"danlianbiao.h"

void ceshi1()
{
	SL* new1 = (SL*)malloc(sizeof(SL));
	new1->data = 1;
	SL* new2 = (SL*)malloc(sizeof(SL));
	new2->data = 2;
	SL* new3 = (SL*)malloc(sizeof(SL));
	new3->data = 3;
	SL* new4 = (SL*)malloc(sizeof(SL));
	new4->data = 4;

	new1->next = new2;
	new2->next = new3;
	new3->next = new4;
	new4->next = NULL;
	//将单链表打印出来
	SL* newjiedian = new1;
	print(newjiedian);
	
}
void ceshi2()
{
	//尾插
	SL* plist = NULL;
	weicha(&plist, 1);
	weicha(&plist, 3);
	weicha(&plist, 4);
	print(plist);
	//头插
	toucha(&plist, 2);
	print(plist);
	//尾删
	weishan(&plist);
	print(plist);
	//头删
	toushan(&plist);
	print(plist);
	//查找
	SL* ret=chazhao(plist,3);
	if (ret ==NULL)
	{
	 printf("没找到\n");
	}
	else
	{
	printf("找到了\n");
	}
	//在指定之前插入
	/*zhidingcha(&plist, ret, 66);
	print(plist);*/
	//在指定后入
	houru(ret,123);
	print(plist);
	//删除pos节点
	/*shanpos(&plist,ret);
	print(plist);*/
	shanposhou(ret);
	print(plist);
	//销毁
	xiaohui(&plist);
	print(plist);
}
int main()
{
	//ceshi1();
	ceshi2();
	return 0;
}