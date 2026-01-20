#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>
typedef int HPDataType;
typedef struct Heap
{
	HPDataType* data;
	int size;
	int capacity;
}HP;
void Adjustup(HPDataType* data, int child);
void AdjustDown(HPDataType* data, int n, int parent);
void Swap(HPDataType* p1, HPDataType* p2);
//初始化
void HPInit(HP* php);
//销毁
void HPDestroy(HP* php);
//插入
void HPPush(HP* php, HPDataType x);
//删除
void HPPop(HP* php);
HPDataType HPTop(HP* php);
bool HPEmpty(HP* php);