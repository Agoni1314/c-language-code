#include"Review_Code.h"
void SLInit(SL* ps)
{
	assert(ps);
	ps->data = NULL;
	ps->capacity = ps->size = 0;
}
void SLDestroy(SL* ps)
{
	assert(ps);
	ps->data = NULL;
	ps->capacity = ps->size = 0;
}
void SLPrint(SL*ps)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->data[i]);
	}
	printf("\n");
}
void JudgeCapacity(SL* ps)
{
	if (ps->capacity == ps->size)
	{
		int newcapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;//先计算扩容多少个数的空间
		SeqDatatype* tmp =(SeqDatatype*)realloc(ps->data, newcapacity*sizeof(SeqDatatype));//计算这些空间所需要的总字节数
		if (tmp == NULL)
		{
			perror("realloc:");
			return;
		}
		else
		{
			ps->data = tmp;
			ps->capacity = newcapacity;
		}
	}
}
void SLPushBack(SL* ps, SeqDatatype x)
{
	assert(ps);
	JudgeCapacity(ps);
	ps->data[ps->size++] = x;
}
void SLPushFront(SL* ps, SeqDatatype x)
{
	assert(ps);
	JudgeCapacity(ps);
	for (int i=ps->size; i > 0; i--)
	{
		ps->data[i] = ps->data[i -1];
	}
	ps->data[0] = x;
	ps->size++;
}
void SLPopBack(SL* ps)
{
	assert(ps);
	ps->size--;
}
void SLPopFront(SL* ps)
{
	assert(ps);
	for (int i = 0; i < ps->size - 1; i++)
	{
		ps->data[i] = ps->data[i + 1];
	}
	ps->size--;
}
void SLInsert(SL* ps, int pos, SeqDatatype x)//pos代表的是下标
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);
	JudgeCapacity(ps);
	for (int i = ps->size; i >= pos; i--)
	{
		ps->data[i] = ps->data[i - 1];
	}
	ps->data[pos] = x;
	ps->size++;
}
void SLErase(SL* ps, int pos)
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);
	for (int i = pos;i<ps->size-1;i++)
	{
		ps->data[i] = ps->data[i + 1];
	}
	ps->size--;
}
SeqDatatype SLFind(SL* ps, SeqDatatype x)
{
	assert(ps);
	for (int i = 0; i <= ps->size - 1; i++)
	{
		if (ps->data[i] == x)
		{
			return i;
		}
	}
	return -1;
}