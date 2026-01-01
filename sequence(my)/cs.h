#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//定义顺序表的结构
////静态顺序表
//#define N 100
//struct SeqList
//{
//	int arr[N];
//	int size;//有效数据个数
//};


//动态
typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* arr;
	int size;//有效数据个数
	int capacity;//空间大小
}SL;
//初始化
void SLInit(SL* ps);
//顺序表的销毁
void SLDestroy(SL* ps);
//插入
void SLPushBack(SL* ps, SLDataType x);//尾部插入
void SLPushFront(SL* ps, SLDataType x);//头部插入
void SLCheckcapacity(SL* ps, SLDataType x);//判断空间是否够用
void SLPrint(sl);//打印
//void SLPushBack(SL* ps);
//void SLPushFront(SL* ps);
//删除
void SLPopBack(SL* ps);//尾删
void SLPopFront(SL* ps);//头删
//指定位置之前的插入/删除
void SLInsert(SL* ps, int pos, SLDataType x);
void SLErase(SL* ps, int pos);
//查找
int SLFind(SL* ps, SLDataType x);
