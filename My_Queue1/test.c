#include"Queue.h"
func1()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 4);
	QueuePush(&q, 3);
	QueuePush(&q, 2);
	QueuePush(&q, 1);
	while (!QueueEmpty(&q))
	{
		printf("%d ",QueueFront(&q));
		QueuePop(&q);
	}
	QueueDestroy(&q);
}
int main()
{
	func1();
}