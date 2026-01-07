#include"cs.h"
fun1()
{
	SL s;
	SLInit(&s);
	SLPush(&s, 1);
	SLPush(&s, 2);
	SLPush(&s, 3);
	SLPush(&s, 4);
	while (!SLEmpty(&s))
	{
		printf("%d ", SLPop(&s));
	}
	SLDestroy(&s);
}
int main()
{
	
	fun1();
	return 0;
}