#include <stdio.h>




void meun()
{
	printf("************************\n");
	printf("********  1.paly   *****\n");
	printf("********  0.exit   *****\n");
	printf("************************\n");
}
void test()
{
	int input = 1;
	do
	{

		meun();
		printf("请选择...\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("扫雷开始\n");
		case 0:
			printf("游戏结束\n");
		default:
			printf("选择错误，请重新选择\n");
		}

	} while (input);
}
int main()
{
	test();
	return 0;
}