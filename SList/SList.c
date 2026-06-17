#include "SList.h"
void SLTPrint(SLTNode* phead)
{
	SLTNode* pcur = phead;
	while (pcur != NULL)
	{
		printf("%d->", pcur->data);
		pcur = pcur->next;
	}
	printf("NULL\n");
}
//申请新节点
SLTNode* SLTBuyNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		perror("malloc fail!");
		exit(1);
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}
//尾插
void SLTPushBack(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);
	//空链表和非空链表

	SLTNode* newnode = SLTBuyNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		//找尾
		SLTNode* ptail = *pphead;
		while (ptail->next)
		{
			ptail = ptail->next;
		}
		//ptail指向尾节点
		ptail->next = newnode;
	}
}
//头插
void SLTPushFront(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);
	SLTNode* newnode = SLTBuyNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}
//尾删
void STLPopBack(SLTNode** pphead)
{
	assert(pphead);
	//链表不能为空
	assert(*pphead);
	//链表只有一个节点和多个节点
	if ((*pphead)->next == NULL)//->优先级高于*
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SLTNode* prev = *pphead;
		SLTNode* ptail = *pphead;
		while (ptail->next)
		{
			prev = ptail;
			ptail = ptail->next;
		}
		free(ptail);
		ptail->next = NULL;
	}
	
}
//头删
void  STLPopFront(SLTNode** pphead)
{
	assert(pphead && *pphead);
	SLTNode* news = (*pphead)->next;
	free(*pphead);
	*pphead = news;
}
//查找
SLTNode* SLTFind(SLTNode* phead, SLTDataType x)
{
	SLTNode* news = phead;
	while (news)
	{
		if (news->data == x)
		{
			return news;
		}
		news = news->next;
	}
	return -1;
}
//在指定位置之前插入
void  STLInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	SLTNode*newnode= SLTBuyNode(x);
	assert(pphead && *pphead);
	assert(pos);
	//若pos==*pphead 说明是头插
	if (pos == *pphead)
	{
		SLTPushFront(pphead, x);
	}
	else
	{
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		newnode->next = pos;
		prev->next = newnode;
	}
	
}
//在指定位置之后插入
void STLInsertAfter(SLTNode* pos, SLTDataType x)
{
	assert(pos);
	SLTNode* newnode = SLTBuyNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}
//删除pos节点
void SLTErase(SLTNode** pphead, SLTNode* pos)
{
	assert(*pphead && pphead);
	assert(pos);
	//pos是头节点和不是头结点
	if (pos==*pphead )
	{
		STLPopFront(pphead);
	}
	else
	{
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = pos->next;
		free(pos);
		pos = NULL;
	}
}
//删除pos之后的节点
void SLTEraseAfter(SLTNode* pos)
{
	assert(pos && pos->next);
	SLTNode* del = pos->next;
	pos->next = del->next;
	free(del);
	del = NULL;
}
//销毁链表
void SListDesTroy(SLTNode** pphead)
{
	assert(pphead && *pphead);
	SLTNode* pcur = *pphead;
	while (pcur)
	{
		SLTNode* next = pcur->next;
		free(pcur);
		pcur = next;
	}
	*pphead = NULL;
}