//队列里的每一个元素都对应一个QNode（单链表节点）
// 一个非空队列会包含多个这样的节点
// 只有空队列时，队列里才没有任何QNode节点
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
typedef int DataType;
typedef struct Linked
{
	DataType data;
	struct Linked* pnext;
}List;
typedef struct NodeQueue
{
	List* phead;
	List* ptail;
	int size;
}Queue;
void QueueInit(Queue* ps);
void QueuePush(Queue* ps, DataType x);
void QueuePop(Queue* ps);
bool QueueEmpty(Queue* ps);
DataType QueueFront(Queue* ps);
DataType QueueBack(Queue* ps);
DataType QueueSize(Queue* ps);
void QueueDestroy(Queue* ps);