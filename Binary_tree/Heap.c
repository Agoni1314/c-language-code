#include"Heap.h"
void HPInit(HP* php)
{
	assert(php);
	php->data = NULL;
	php->capacity = php->size = 0;
}
void HPDestroy(HP* php)
{
	assert(php);
	php->data = NULL;
	php->capacity = php->size = 0;
}
void Swap(HPDataType* p1, HPDataType* p2)
{
	HPDataType tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
void Adjustup(HPDataType* data, int child)
{
	int parent = (child - 1) / 2;
	while (child>0)
	{
		if (data[child] < data[parent])
		{
			Swap(&data[child], &data[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}
void HPPush(HP* php, HPDataType x)
{
	assert(php);
	if (php->capacity == php->size)
	{
		int newCapacity = php->capacity == 0 ? 4 : 2 * php->capacity;
		HPDataType* tmp = (HPDataType*)realloc(php->data, newCapacity * sizeof(HPDataType));//申请多大内存
		if (tmp == NULL)
		{
			perror("realloc");
		}
		php->data = tmp;
		php->capacity = newCapacity;
	}
	php->data[php->size] = x;
	php->size++;
	Adjustup(php->data, php->size - 1);		
}
void AdjustDown(HPDataType* data,int n,int parent)
{//假设左孩子小
	int child = parent * 2 + 1;
	while (child<n)//child>n,说明孩子不存在，调整到叶子了
	{
		if (child+1<n && data[child + 1] < data[child])
		{
			++child;
		}
		if (data[child] < data[parent])
		{
			Swap(&data[child], &data[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
	
}
void HPPop(HP* php)
{
	assert(php);
	assert(php->size>0);
	Swap(&php->data[0], &php->data[php->size-1]);
	php->size--;
	AdjustDown(php->data,php->size,0);
}
HPDataType HPTop(HP* php)
{
	assert(php);
	assert(php->size > 0);
	return php->data[0];
}
bool HPEmpty(HP* php)
{
	assert(php);
	return php->size == 0;
}
