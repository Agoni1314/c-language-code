#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>

typedef struct Binary_tree* QDataType;//传一个节点的指针，每一个节点都是一个二叉树类型的节点
typedef struct QueueNode
{
	struct QueueNode* next;
	QDataType val;
}QNode;
typedef struct Queue
{
	QNode* phead;
	QNode* ptail;
	int size;
}Queue;
void QueueInit(Queue* pq);
//队尾插入
void QueuePush(Queue* pq, QDataType x);
//队头删除
void QueuePop(Queue* pq);
//取对头和对尾
QDataType QueueFront(Queue* pq);
QDataType QueueBack(Queue* pq);
////队尾插入
//void QueuePush(QNode** pphead, QNode** pptail , int x);
////队头删除
//void QueuePop(QNode** pphead, QNode** pptail, int x);
//求队列的数据个数
int QueueSize(Queue* pq);
bool QueueEmpty(Queue* pq);
void QueueDestroy(Queue* pq);
