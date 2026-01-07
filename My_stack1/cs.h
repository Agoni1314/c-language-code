#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
//一个栈对应一个结构体实例，所有入栈、出栈操作都是围绕这个结构体展开的
// 而 realloc 扩容的不是结构体本身
// 而是结构体里那个指针（p）指向的、用来存储实际栈元素的动态内存空间
typedef int DataType;
typedef struct stact
{
	DataType* p;
	int top;
	int space;
}SL;
//初始化和销毁
void SLInit(SL* ps);
void SLDestroy(SL* ps);
//入栈和出栈
void SLPush(SL* ps, int x);
DataType  SLPop(SL* ps);
//判空
bool SLEmpty(SL* ps);
//获取数据个数
DataType SLSize(SL* ps);