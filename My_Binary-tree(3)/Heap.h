#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>
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
//≥ı ºªØ
void HPInit(HP* php);
//œ˙ªŸ
void HPDestroy(HP* php);
//≤Â»Î
void HPPush(HP* php,HPDataType x);
//…æ∂•
void HPPop(HP* php);
//≈–ø’
bool HPEmpty(HP* php);
HPDataType HPTop(HP* php);
