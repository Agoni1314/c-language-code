

	/*int arr[][5] = { 0};*/
	//printf("%d", arr[2][3]);
	/*int a = 0;
	int b = 0;
	for (a = 0; a < 3; a++)
	{
		for (b = 0; b < 5; b++)
		{
			scanf("%d", &arr [a][b]);
		}
	}
	
	for (a = 0; a < 3; a++)
	{
		for (b = 0; b < 5; b++)
		{
			printf("%d ", arr [a][b]);
		}
		printf("\n");
	}*/
	/*int a = 0, b = 0;
	for (a = 0; a < 3; a++)
	{
		for (b = 0; b < 5; b++)
		{
			
			printf("arr[%d][%d]=%p\n", a, b, &arr[a][b]);
			
		}*/
		
		
	/*}*/

	//char arr1[]  = "welcome to chain!";
	//char arr2[]  = "*****************";
	//int  left = 0; 
	//int right = strlen(arr1) - 1;
	//while (left<=right)
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	printf("%s\n", arr2);
	//	Sleep(1000);//Sleep的头字母要大写，单位是毫秒
	//	system("cls");
	//	left++; right--;
	//	
	//}
#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <Windows.h>
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 4;
//	
//	int s = 0;
//	int m = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = m - 1;
//	int mid = (right - left) / 2 + left;
//	while (left<=right)
//	{
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			s = 1;
//			printf("找到了，下标是%d", mid);
//			break;
//		}
//	}
//	if (s == 0)
//	{
//		printf("没找到");
//	}
//	return 0;
//}
#include <stdio.h>  // 新增：引入printf所需的头文件

#define CRT_SECURE_NO_WARNINGS
// 其他头文件或宏定义...

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 4;
	int i = 0;
	int m = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = m - 1;  // 注意：数组索引从0开始，right应设为“长度-1”
	int mid = (right - left) / 2 + left;
	int s = 0;
	while (left <= right)
	{
		if (arr[mid] < k)
			left = mid + 1;
		else if (arr[mid] > k)
			right = mid - 1;
		else
		{
			s = 1;
			printf("找到了，下标是%d", mid);
			break;
		}
		mid = (right - left) / 2 + left;  // 每次循环需重新计算mid
	}
	if (s == 0)
		printf("没找到");
	return 0;
}