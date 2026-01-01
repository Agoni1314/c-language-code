//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int  arr[10];
//	printf("%zd\n\n",sizeof(arr));//数组的大小
//
//
//	printf("%p\n",arr);//数组首元素的地址
//	printf("%p\n", &arr[0]);//所以说明了数组名就是首元素地址
//	printf("arr=%p\n\n",&arr);//数组的地址
//
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]+1);
//	printf("arr=%p", &arr+1);//&数组名和sizeof（数组名）都是取出的整个数组大小
//	return 0;
//}


//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int arr[10];
//	int* p = arr;
//	int sc = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sc; i++)
//	{
//		scanf("%d",(p+i));//&arr[i]
//	}
//	for (int i = 0; i < sc; i++)
//	{
//		printf("%d ", *(p + i));//*(arr+i)  arr[i]
// 	}
//	return 0;
//}


//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	char arr[10] = "abcdefg";
//	char* p1 = arr;
//	*p1 = 'w';
//	
//	char const * p2 = "abcdefg";//这样是将首元素的地址放在p2中,常量字符串不能修改（不管是否加了const）
//	//*p2='w'  err
//	printf("%s\n",p1);//%s打印需要一个起始地址
//	printf("%s\n", p2);
//	return 0;
//}


//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	char str1[] = "hello bit.";//两个不同的数组首元素地址不一样
//	char str2[] = "hello bit.";
//	const char  * str3= "hello bit.";//将这个字符串常量传到指针str3中就穿传送的是h的首元素地址，在指针中不同的指针变量存放相同的字符串常量就是相互会引用
//	const char  * str4 = "hello bit.";
//	if (str1 == str2)
//		printf("一样\n");
//	else
//		printf("不一样\n");
//	if (str3 == str4)
//		printf("一样\n");
//	else
//		printf("不一样\n");
//	return 0;
//}



//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** pp =&p;//二级指针    "*"表示pp是一个指针变量，"int*"表示pp指向的p的类型是int*
//	printf("%d",**pp);
//	return 0;
//}


//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {2,3,4,5,6};
//	int arr3[] = {3,4,5,6,7};
//	int* arr[] = {arr1,arr2,arr3};//存放的是首元素的地址
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ",arr[i][j]);//*(*(arr+i)+j),相当于用二维数组模拟指针数组
//		}
//		printf("\n");
//	}
//	return 0;
//}