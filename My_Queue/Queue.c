#include"Queue.h"
//初始化
void QueueInit(Queue* ps)
{
	assert(ps);
	ps->phead = ps->ptail = NULL;
	ps->size = 0;
}
//尾入
void QueuePush(Queue* ps, DataType x)
{
	assert(ps);
		List* space = (List*)malloc(sizeof(List));
		if (space == NULL)
		{
			perror("malloc");
			return;
		}
		else 
		{
			space->pnext = NULL;
			space->data = x;
		}
		if (ps->ptail == NULL)
		{
			ps->phead = ps->ptail = space;
		}
		else
		{
			ps->ptail->pnext = space;
			ps->ptail = space;
		}
		ps->size++;
		
}
//头删
void QueuePop(Queue* ps)
{
	assert(ps);
	if (ps->phead->pnext == NULL)
	{
		free(ps->phead);
		ps->phead = ps->ptail = NULL;
	}
	else
	{
		List* newphead = ps->phead->pnext;
		free(ps->phead);
		ps->phead = newphead;//ps->phead->pnext错误，这里的phead已经被释放掉了
	}
	ps->size--;
}
//判断是否为空
bool QueueEmpty(Queue* ps)
{
	assert(ps);
	return ps->size == 0;
}
//取对头和对尾
DataType QueueFront(Queue* ps)
{
	assert(ps);
	assert( !QueueEmpty(ps));
	return ps->phead->data;

}
DataType QueueBack(Queue* ps)
{
	assert(ps);
	assert(ps->ptail);
	return ps->ptail->data;
}
DataType QueueSize(Queue* ps)
{
	assert(ps);
	return ps->size;
}
//单链表的销毁
void QueueDestroy(Queue* ps)
{
	assert(ps);
	List* newphead = ps->phead;
	while (newphead)
	{
		List* cur = newphead->pnext;
		free(newphead);
		newphead = cur;
	}
	ps->phead = ps->ptail = NULL;
	ps->size = 0;

}
