//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%zd\n",sizeof(a));//16
//	printf("%zd\n", sizeof(a+0));//首元素地址，类型是int*
//	printf("%zd\n", sizeof(*a));//首元素地址，*a就是首元素==a[0]
//	printf("%zd\n", sizeof(a+1));//第二个地址，类型是int*
//	printf("%zd\n", sizeof(a[1]));//第二个元素
//	printf("%zd\n", sizeof(&a)); //数组地址,地址大小是4/8
//	printf("%zd\n", sizeof(*&a));//取出地址后解引用就相互抵消了，类型是int(*)[4]，就是数组的地址
//	printf("%zd\n", sizeof(&a+1));//整个数组地址后加1后的第一个地址
//	printf("%zd\n", sizeof(&a[0]));//首元素地址
//	printf("%zd\n", sizeof(&a[0]+1));//数组第二个元素的地址，大小4/8
//	return 0;
//}

//
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	char arr[] = {'a','b','c','d','e','f'};
//	printf("%zd\n", sizeof(arr));
//	printf("%zd\n", sizeof(arr+0));
//	printf("%zd\n", sizeof(*arr));
//	printf("%zd\n", sizeof(arr[1]));
//	printf("%zd\n", sizeof(&arr));
//	printf("%zd\n", sizeof(&arr+1));
//	printf("%zd\n", sizeof(&arr[0]+1));
//	return 0;
//}



//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//int main()
//{       //strlen的参数是const char*,返回值是size_t      size_t strlen(const char*)
//	char arr[] = { 'a','b','c','d','e','f' };
//		printf("%zd\n", strlen(arr));//arr首元素地址，数组中没有\0就会导致绝界访问，会生成随机值
//		printf("%zd\n", strlen(arr+0));//arr+0首元素地址，数组中没有\0就会导致绝界访问，会生成随机值
//		//printf("%zd\n", strlen(*arr));//arr+0首元素地址，*arr是首元素，就是a的ascii值，就相当与吧97传给了strlen，就会得到野指针，代码会出问题
//		//printf("%zd\n", strlen(arr[1]));//将第二个元素ascii值传给strlen也是错的
//		printf("%zd\n", strlen(&arr));//数组地址，起始位置是数组的第一个元素的位置，随机值
//		printf("%zd\n", strlen(&arr+1));//随机值
//		printf("%zd\n", strlen(&arr[0]+1));//第二个元素向后统计，得到的也是随机值
//	return 0;
//}



//
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	char arr[] = "abvdef";
//	printf("%d\n",sizeof(arr));
//	printf("%d\n", sizeof(arr+0));
//	printf("%d\n", sizeof(*arr));
//	printf("%d\n", sizeof(arr[1]));
//	printf("%d\n", sizeof(&arr));
//	printf("%d\n", sizeof(&arr+1));
//	printf("%d\n", sizeof(&arr[0]+1));
//
//	return 0;
//}


//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = "abvdef";
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr + 0));
//	//printf("%d\n", strlen(*arr));
//	//printf("%d\n", strlen(arr[1]));
//	printf("%d\n", strlen(&arr));
//	printf("%d\n", strlen(&arr + 1));
//	printf("%d\n", strlen(&arr[0] + 1));
//
//	return 0;
//}


//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	const char* p = "abcdef";
//	printf("%d\n", sizeof(p));//p是指针变量
//	printf("%d\n", sizeof(p+1));//p+1是b的地址
//	printf("%d\n", sizeof(*p));//p的类型是const char*,*p就是char类型，1个字节
//	printf("%d\n", sizeof(p[0]));//p[0]==*（p+0）==*p=='a'，大小就是1个字节
//	printf("%d\n", sizeof(&p));//取出的是P的地址
//	printf("%d\n", sizeof(&p+1));//跳过p的指针变量皇后的地址
//	printf("%d\n", sizeof(&p[0]+1));
//	return 0;
//}



//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	const char* p = "abcdef";
//	printf("%d\n", strlen(p));
//	printf("%d\n", strlen(p + 1));
//	printf("%d\n", strlen(*p));// *p就是'a'的ascii值，err
//	printf("%d\n", strlen(p[0]));//p[0]==*（p+0）==*p=='a'
//	printf("%d\n", strlen(&p));//取出的是P的地址,但字符串有自己的地址，所以没有太大关系，随机值
//	printf("%d\n", strlen(&p + 1));//跳过p的指针变量皇后的地址
//	printf("%d\n", strlen(&p[0] + 1));
//	return 0;
//}


#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a[3][4] = { 0 };
	printf("%d\n",sizeof(a));//48
	printf("%d\n", sizeof(a[0][0]));//第一行第一个元素地址
	printf("%d\n", sizeof(a[0]));//第一行的地址，大小为16
	printf("%d\n", sizeof(a[0]+1));//没有单独的a[0]，所以就是第一行第二个元素地址
	printf("%d\n", sizeof(*(a[0] + 1)));//第一行第二个元素地址解引用的内容
	printf("%d\n", sizeof(a+1));//第二行的地址,a+1是数组指针
	printf("%d\n", sizeof(*(a + 1)));//第二行的大小
	printf("%d\n", sizeof(&a[0]+1));  //第二行地址
	printf("%d\n", sizeof(*(&a[0] + 1)));//第二行大小
	printf("%d\n", sizeof(*a));// a表示二维数组首元素地址，也就是第一行的地址，*a就是第一行，大小16字节，*a==*(a+0)==a[0]
	printf("%d\n", sizeof(a[3]));
	return 0;
}


//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* p = (int*)(&a + 1);
//	printf("%d %d",*(a+1),*(p-1));
//	return 0;
//}


//#define  _CRT_SECURE_NO_WARNINGS
//在x86的环境下
//假设结构体的大小是20个字节
//程序输出的结果是什么
//#include <stdio.h>
//struct a
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBA[4];
//}*p=(struct a*)0x1000000;
//int main()
//{
//	printf("%p\n",p+0x1);
//	printf("%p\n",(unsigned long)p+0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}


//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//圆括号的话就是逗号表达式了
//	//int a[3][2] = { {0,1},{2,3},{4,5} };
//	int* p;
//	p = a[0];//a[0]表示第一行的数组名，就是首元素地址&arr[0][0]的地址
//	printf("%d",p[0]);//*(p+0)==*p
//	return 0;
//}