#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//print(int arr[ ])数组传参的时候，形参可以写成数组的形式，但本质上还是指针变量
//{
//	int sc = sizeof(arr) / sizeof(arr[0]);所以这个时候“sizeof(arr)”就不是一个数组的大小了，是首元素的大小
//	for (int i = 0; i < sc; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
void print(int* p,int sc)//地址就用指针接收，这个时候形参和实参就访问的是同一个数组，就可以省略数组大小
{                        //也可以将整个数组大小传过去后再计算大小，但是这是很傻逼的操作
	for (int i = 0; i < sc; i++)
	{
		printf("%d ",*(p + i));
	  }
}
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int sc = sizeof(arr) / sizeof(arr[0]);
	print(arr,sc);
	return 0;
}