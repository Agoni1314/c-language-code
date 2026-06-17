#include "SList.h"
void SListTest01()
{
	//链表由一个一个的节点组成
	//创建几个节点
	SLTNode* node1 =(SLTNode*) malloc(sizeof(SLTNode));
	node1->data = 1;
	SLTNode* node2 = (SLTNode*)malloc(sizeof(SLTNode));
	node2->data = 2;
	SLTNode* node3 = (SLTNode*)malloc(sizeof(SLTNode));
	node3->data = 3;
	SLTNode* node4 = (SLTNode*)malloc(sizeof(SLTNode));
	node4->data = 4;
	//将四个节点连接起来
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next =NULL;
	//调用链表的打印
	SLTNode* plist = node1;
	SLTPrint(plist);

}
void SListTest02()
{
	SLTNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
	SLTPrint(plist);
	SListDesTroy(&plist);
	SLTPrint(plist);
	//SLTPushFront(&plist, 5);
	//SLTPrint(plist);
	//STLPopFront(&plist);
	//SLTPrint(plist);
	//SLTNode * news=SLTFind(plist, 2);
	///*STLInsert(&plist,news,12);
	//SLTPrint(plist);
	//STLInsertAfter(news, 333);
	//SLTPrint(plist);*/
	///*if (news == NULL)
	//{
	//	printf("没找到\n");
	//}
	//else
	//{
	//	printf("找到了\n");
	//}*/
	///*SLTErase(&plist,news);
	//SLTPrint(plist);*/
	//SLTEraseAfter(news);
	//SLTPrint(plist);
}
int main()
{
	//SListTest01();
	SListTest02();
	return 0;
}