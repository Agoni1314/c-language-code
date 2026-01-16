#pragma once
//Ë³Ðò±í
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SeqDatatype;
typedef struct SeqList
{
	int* data;
	int size;
	int capacity;
}SL;
void SLInit(SL* ps);
void SLDestroy(SL* ps);
void SLPrint(SL* ps);
void SLPushBack(SL* ps, SeqDatatype x);
void SLPushFront(SL* ps, SeqDatatype x);
void SLPopBack(SL* ps);
void SLPopFront(SL* ps);
void SLInsert(SL* ps, int pos, SeqDatatype x);
void SLErase(SL* ps, int pos);
SeqDatatype SLFind(SL* ps, SeqDatatype x);
