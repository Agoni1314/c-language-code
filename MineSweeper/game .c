#define  _CRT_SECURE_NO_WARNINGS

#include "game.h"

void chuan(char mine[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j=0;
		for ( j = 0; j < cols; j++)
		{
			mine[i][j] = set;
		}
	}
}
void display(char kll[ROWS][COLS], int row, int col) 
{
	printf("------扫雷------\n");
	int w = 0;
	for (int e = 0; e <= col; e++)
	{
		printf("%d ",w++);
	}
	printf("\n");

		for (int i = 1; i <= row; i++)
		{
			printf("%d ", i);
			for (int j = 1; j <= col; j++)
			{
				printf("%c ", kll[i][j]);
			}
			printf("\n");
		}
}
void chuanlei(char kll[ROWS][COLS], int row, int col)
{
	int count = lei_geshu;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (kll[x][y] == '0')
		{
			kll[x][y] = '1';
			count--;
		}
		
	}
}
static int get_lei(char arr1[ROWS][COLS], int x, int y)
{
	return arr1[x - 1][y] + 
		   arr1[x - 1][y - 1] + 
		   arr1[x][y - 1] + 
		   arr1[x + 1][y - 1] + 
		   arr1[x + 1][y] + 
		   arr1[x + 1][y + 1] + 
		   arr1[x][y + 1] + 
		   arr1[x - 1][y + 1] - 8 * '0';
}

void find_lei(char arr1[ROWS][COLS], char arr2[ROWS][COLS], int row, int col)
{
	//查找要排除的坐标
	int x = 0; int y = 0;
	int win=0;

	while (win < row * col - lei_geshu)
	{
		printf("请输入对应的坐标");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (arr2[x][y] == '*')
			{
				if (arr1[x][y] == '1')
				{
					printf("你输了\n");
					display(arr1, ROW, COL);
					break;
				}
				else
				{
					//统计周围有几个雷
					int count = get_lei(arr1, x, y);
					arr2[x][y] = count + '0';
					display(arr2, ROW, COL);
					win++;
				}
			}
			else
			{
				printf("该坐标已被排查\n");
			}
		}
		else
		{
			printf("坐标错误，请重新输入\n");
		}
	}
	if (win == row * col - lei_geshu)
	{
		printf("恭喜你，排雷成功\n");
		display(arr1, ROW, COL);
	}
}