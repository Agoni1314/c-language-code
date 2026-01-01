//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//typedef union un
//{
//	char c;
//	int i;
//}s;
//int main()
//{
//	union un u= {0};
//	//printf("%c\n ", u.c);//联合体只能给一个参数初始化
//	///*printf("%zd", sizeof(s));*/
//	//printf("%p\n", u);
//	//printf("%p\n", (u.c));
//	//printf("%p\n", (u.i));
//	u.i = 0x11223344;
//	u.c = 0x55;
//
//	return 0;
//}

   /*联合体大小
   1.联合体的大小至少是最大成员的大小
   2.当最大成员不是最大对齐数的整数倍时，就要对齐到最大对齐数的整数倍*/


//#include <stdio.h>
//union un
//{
//	char c[5];//char类型大小为1，,总大小为5，VS默认8，最终1
//	int  i;//int类型大小为4，VS默认8，最终4
//};//联合体总大小为最大对齐数的整数倍，就需要看一下总大小是不是最大对齐数的整数倍
//int main()
//{
//	printf("%zd", sizeof(union un));
//	return 0;
//}



//#include <stdio.h>
// char  chek()
//{
//	union un
//	{
//		int i;
//		char c;
//	}s;
//	s.i = 2;
//	return s.c;
//}
//int main()
//{
//	int ret = chek();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}


//enum枚举关键字
#include <stdio.h>
enum color
{
	//枚举常量,从0开始，不能直接修改，但可以在创建的时候给初始值“red=5”
	red,
	green=5,
	blue,
};
enum sex
{
	male,
	female,
	secret,
};
int main()
{
	//enum color s = red;
	printf("%d\n", red);
	printf("%d\n", green);
	printf("%d\n", blue);
	return 0;
}