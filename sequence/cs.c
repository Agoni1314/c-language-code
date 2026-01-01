#include"cs.h"
//顺序表的初始化
void SLInit(SL* ps)
{
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}

//顺序表的销毁
void SLDestroy(SL* ps)
{
	if (ps->arr)//等价于if(ps->arr !=NULL)  
	{
		free(ps->arr);
		ps->arr = NULL;
	}
	ps->arr = NULL;
	ps->capacity = ps->size = 0;
}

//判断空间是否够用
void SLCheckcapacity(SL* ps)
{
	//插入之前看空间是否够用

	if (ps->capacity == ps->size)
	{
		//申请空间
		int newCapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		SLDataType* tmp = (SLDataType*)realloc(ps->arr, newCapacity * sizeof(SLDataType));//申请多大内存
		if (tmp == NULL)
		{
			perror("realloc");
		}
		else//内存开辟成功
		{
			ps->arr = tmp;
			ps->capacity = newCapacity;

		}

	}
}
//尾插
void SLPushBack(SL* ps, SLDataType x)
{
	SLCheckcapacity(ps);
	//ps->arr[ps->size] = x;
	//++ps->size;
	//ps->arr[ps->size++] = x;
	assert(ps);
	ps->arr[ps->size++] = x;
}
//前插
void SLPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	SLCheckcapacity(ps);
	//先让顺序表中整体向后移
	for (int i = ps->size; i > 0; i--)
	{
		ps->arr[i] = ps->arr[i - 1];
	}
	ps->arr[0] = x;
	ps->size++;
}
void SLPrint(SL s)
{
	for (int i = 0; i < s.size; i++)
	{
		printf("%d ", s.arr[i]);
	}
	printf("\n");

}

//头删
void SLPopFront(SL* ps)
{
	assert(ps);
	for (int i = 0; i < ps->size - 1; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}
//尾删
void SLPopBack(SL* ps)
{
	assert(ps);
	ps->size--;
}
//指定位置之前插入
void SLInsert(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	assert(ps >= 0 && pos <= ps->size);
	SLCheckcapacity(ps);
	for (int i = ps->size; i > pos; i--)
	{
		ps->arr[i] = ps->arr[i - 1];
	}
	ps->arr[pos] = x;
	ps->size++;
}
//指定位置删除
void SLErase(SL* ps, int pos)
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);
	for (int i = pos; i < ps->size - 1; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}
//查找
int SLFind(SL* ps, SLDataType x)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->arr[i] == x)
		{
			return i;
		}

	}
	return -1;
}