// #define  _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
// struct book
// 	{
// 		char name[20];
// 		char author[20];
// 		float price;
// 		char id[3];
// 	}
// int main()
// {
// 	struct book b1={"鹏哥c语言","鹏哥",18.8,"PG1001"};//初始化
// 	struct book b2={.id="PG1002",.name="鹏哥c语言大全",.author="鹏哥"};//初始化
// return 0;
// }


//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//struct
//{
//	char c;
//	int i;
//	double d;
//}s = { 'x',100,112.3 };  //匿名结构体类型创建变量s
//int main()
//{
//	printf("%c %d %lf", s.c, s.i, s.d);
//	return 0;
//}



// #define  _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
// struct book
// 	{
// 		char name[20];
// 		char author[20];
// 		float price;
// 		char id[3];
// 	}
// int main()
// {
// 	struct book b1={"鹏哥c语言","鹏哥",18.8,"PG1001"};//初始化
// 	struct book b2={.id="PG1002",.name="鹏哥c语言大全",.author="鹏哥"};//初始化
// return 0;
// }


//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//typedef struct note
//{
//	int data;//数据
//	struct note*next//放一个同类型的指针就是在这个结构体里面引用另一个结构体叫做自引用
//}note;       //将struct note类型结构体重命名为note,匿名结构体类型不能实现结构体自引用
//int main()
//{
//	
//	return 0;
//}


//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
// struct s
//{
//	char c1;
//	int i;
//	char c2;
//};
//int main()
//{
//	printf("%zd\n", sizeof(struct s));
//	return 0;
//}

/*结构体的大小规则
1.结构体的第一个成员对齐结构体变量起始位置偏移量为0的地址
2.其他成员变量要对齐到对齐数的整数倍的地址
3.对齐数=编译器默认的一个对齐数与成员变量大小的最小值
4.VS中默认为8(可通过#pragma修改)
5.结构体总大小为最大对齐数的倍数
6.若结构体中嵌套了其他结构体，就嵌套的结构体成员对齐到自己的最大对齐数*/


//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//typedef struct s
//{
//	char c1;
//	char c2;
//	int i;
//}s;
//int main()
//{
//	printf("%zd\n", sizeof(s));
//	return 0;
//}


//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>     //结构体嵌套
//struct s1
//{
//	double c1;
//	char c2;
//	int i;
//};
//struct s
//{
//	double a;
//	struct s1 s2;
//	int i;
//
//};
//int main()
//{
//	printf("%zd\n", sizeof(struct s));
//	return 0;
//}


//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#pragma pack(1)//默认值设定为1
// struct s
//{
//	char c1;
//	int i;
//	char c2;
//};
//int main()
//{
//	printf("%zd\n", sizeof(struct s));
//	return 0;
//}
  


//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//typedef struct s
//{
//	int arr[1000];
//	int n;
//	double d;
//}s;
//void print1(s tmp)
//{
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ",tmp.arr[i]);
//	}
//	printf("\n");
//	printf("%d\n", tmp.n);
//	printf("%lf\n", tmp.d);
//}
//void print(const s* k)
//{
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", k->arr[i]);
//	}
//	printf("\n");
//	printf("%d\n", k->n);
//	printf("%lf\n", k->d);
//}
//int main()
//{
//	s s1 = { {1,2,3,4,5},100,2.3 };
//	//print1(s1);  通过用传递结构体进行输出
//	print(&s1);//通过传递地址去输出
//	return 0;
//}




#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>//位段式
struct s
{
	int a : 2;//2个位bit
	int b : 4;
	int c : 6;
	int d : 8;
	
}s;
int main()
{
	s.a = 12;
	s.b = 34;
	s.c = 213;
	s.d = 32;
	printf("%zd", sizeof(struct s));
	return 0;
}
