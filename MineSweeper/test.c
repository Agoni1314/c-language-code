#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "game.h"
#include <stdlib.h>
#include <time.h>
void meun()
{
	printf("************************\n");
	printf("********  1.paly   *****\n");
	printf("********  0.exit   *****\n");
	printf("************************\n");
}
void game()
{
	char arr1[ROWS][COLS];
	char  arr2[ROWS][COLS];
	//初始化函数，用于初始化棋盘
	chuan(arr1,ROWS,COLS,'0');
	chuan(arr2,ROWS,COLS,'*');
	
	//布置雷
	chuanlei( arr1,ROW,COL);
	//display(arr1, ROW, COL);
	//打印棋盘
	
	display(arr2, ROW, COL);
	//排查雷
	find_lei(arr1,arr2,ROW,COL);
}
void test()
{
	int input = 1;
	srand((unsigned int)time(NULL));
	do
	{

		meun();
		printf("请选择...\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
		case 0:
			printf("游戏结束\n"); break;
		default:
			printf("选择错误，请重新选择\n"); break;
		}

	} while (input);
}
int main()
{
	test();
	return 0;
}