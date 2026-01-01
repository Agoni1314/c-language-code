#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//定义双链表的结构
typedef int  LTDataType;
typedef struct ListNode 
{
	LTDataType data;
	struct ListNode* next;
	struct ListNode* prev;

}LTNode;
//初始化
//void  LTInit(LTNode** pphead);
//初始化2
LTNode* LTInit();
//销毁链表
void LTDesTroy(LTNode*pphead);
//插入数据前要先初始化到有一个节点
void LTPushBack();
//尾插
void LTPushBack(LTNode* phead, LTDataType x);
//头插
void LTPushFront(LTNode* phead, LTDataType x);
//尾删
void LTPopBack(LTNode* phead);
//头删
void LTPopFront(LTNode* phead);
//查找
LTNode* LTFind(LTNode* phead, LTDataType x);
//pos节点之后插入
void LTInsert(LTNode* pos, LTDataType x);
//删除pos节点
void LTErase(LTNode* phead);



  