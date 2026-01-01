#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//先写出单链表的结构
typedef int zx;

typedef  struct danlianbiao
{
	zx data;
	struct danlianbiao* next;
	
}SL;
//打印链表
void print(SL* phead);
//尾插
void weicha(SL** pphead, zx x);
//头插
void toucha(SL** ppend, zx x);
//尾删
void weishan(SL** ppend);
//头删
void toushan(SL** pphead);
//查找
SL* chazhao(SL* pphead, zx x);
//在指定位置之前插入
void zhidingcha(SL** pphead, SL* pos, zx x);
//在指定位置之后插入
void houru( SL* pos,zx x);
//删除pos节点
void shanpos(SL**pphead,SL* pos);
//删除pos之后节点
void shanposhou(SL* pos);
//销毁链表
void xiaohui(SL** pphead);
