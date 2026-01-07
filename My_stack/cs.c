#include"cs.h"
void SLInit(SL* ps)
{
	assert(ps);
	ps->p = NULL;
	ps->top = ps->space = 0;
}
void SLDestroy(SL* ps)
{
	assert(ps);
	free(ps->p);
	ps->p = NULL;
	ps->top = ps->space = 0;
}
void SLPush(SL* ps,int x)
{
	assert(ps);
	if (ps->top == ps->space)
	{
		int newspace = ps->space == 0 ? 4 : ps->space * 2;
		DataType* tmp=(DataType*)realloc(ps->p, newspace*sizeof(DataType));
		if (tmp == NULL)
		{
			perror("realloc:");
			return;
		}
		else
		{
			ps->p = tmp;
			ps->space = newspace;
		}
	}
		ps->p[ps->top] = x;
		ps->top++;
}
DataType SLPop(SL* ps)
{
	assert(ps);
	assert(ps->top>0);
	DataType value = ps->p[ps->top-1];//如果这里写的是top--，下标就会先使用后减，就会出现越界访问的错误
	ps->top--;
	return value;
}
bool SLEmpty(SL* ps)
{
	assert(ps);
	return ps->top == 0;
}
DataType SLSize(SL* ps)
{
	assert(ps);
	return ps->top;
}