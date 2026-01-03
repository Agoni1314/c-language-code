#include"cs.h"
void QueueInit(Queue* pq)
{
	assert(pq);
	pq->phead = pq->ptail = NULL;
	pq->size=0;
}
//队尾插入
void QueuePush(Queue* pq, QDataType x)
{
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL)
	{		perror("malloc");
		return;
	}
	else
	{
		newnode->next = NULL;
		newnode->val = x;
	}
	if (pq->ptail == NULL)
	{
		pq->phead = pq->ptail = newnode;
	}
	else
	{
		pq->ptail->next = newnode;
		pq->ptail = newnode;
	}
	pq->size++;
}
//队头删除
void QueuePop(Queue* pq)
{
	//只有一个节点
	assert(pq);
	assert(pq->size != 0);
	if (pq->phead->next==NULL)
	{
		free(pq->phead);
		pq->ptail =pq->phead= NULL;
		pq->size--;
	}
	else
	{
		//有多个节点
		
		QNode* new = pq->phead->next;
		free(pq->phead);
		pq->phead = new;
		pq->size--;
	}
	
}
int QueueSize(Queue* pq)
{
	assert(pq);
	return pq->size;
}
QDataType QueueFront(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));
	assert(pq->phead);
	return pq->phead->val;
}
QDataType QueueBack(Queue* pq)
{
	assert(pq);
	assert(pq->ptail);
	return pq->ptail->val;
}

bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->size == 0;
}

void QueueDestroy(Queue* pq)
{
	assert(pq);
	QNode* cur = pq->phead;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}
	pq->phead = pq->ptail = NULL;
	pq->size = 0;
}
