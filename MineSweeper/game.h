#pragma once
#include <stdio.h>
#define ROW 9
#define COL 9
 
#define ROWS ROW+2
#define COLS COL+2
#define lei_geshu 10

void chuan(char arr[ROWS][COLS],int rows,int cols,char set);//棋盘初始化函数

void display(char kll[ROWS][COLS], int row, int col);

//布置雷
void chuanlei(char kll[ROWS][COLS], int row, int col);
//排查雷
void find_lei(char arr1[ROWS][COLS],char arr2[ROWS][COLS], int row, int col);