//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	char arr[10] = "abcdef";
//	char* p1 = arr;
//	*p1 = 'w';
//
//	char* p2 = "abcdef";//"常量字符串不能被修改并且p2指针指向的是首元素的地址a"，编译器会报错，我们也可以用const阻止改变
//	*p2 = 'w';err
//	
//	return 0;
//}



//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	char str1[] = "hello bit!";
//	char str2[] = "hello bit!";//数组地址不一样
//	const char* str3 = "hello bit!";//str3指针指向的是"hello bit!"地址的指针，但常量字符串不能改变，并且指向的是首元素的地址h
//	const char* str4 = "hello bit!";//那么str4指向的也是h的首地址
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
//	int arr[10] = { 0 };
//	// int（*p）[10]=&arr   取出的是数组地址   int（*）[10]=&arr数组指针类型
//
//
//	int* p1[10]; //p1表示数组名 里面有10个元素，数组的每个元素是int*,存放的是指针
//	int (*p2)[10];//p2旁边放一个*表示是一个指针变量，指向的是整型数组
//	return 0;      //[]优先级高于*所以加（）
//}


//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	/*int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}*/
//	/*int arr[10] = {1,2,3,4,5,6,7,8,9,10};// 过于赘述，不建议使用
//	int (*p)[10] =&arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);
//		
//	}
//	return 0;
//}*/
//
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void print(int (*arr)[5], int r, int c)//int arr[3][5]   二维数组的数组名也是首元素地址
//{
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			printf("%d ",*(*(arr+i)+j));//arr[i][j]
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = {1,2,3,4,5,2,3,4,5,6,3,4,5,6,7};
//	print(arr, 3, 5);
//	return 0;
//}//二级指针指向的是一级指针变量存放的地址


//函数指针
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("%p\n", add);
//	printf("%p\n", &add);
//	int (*pr)(int,int) = &add;//pr专门存放函数的地址就是函数指针变量，形式参数可加可不加
//	int (*)(int, int) = &add;//函数指针类型
//	return 0;
//}



//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*p)(int,int) = add;
//	int b = add(1, 2);//函数名调用
//	printf("%d\n", b);
//
//	int a=(*p)(2, 3);//函数指针调用
//	printf("%d\n", a);
//
//	int c = p(3, 4);
//	printf("%d\n", c);//因为函数名是函数的地址，函数名调用的时候没有解引用，
//	return 0;         //那将函数地址存放在一个指针变量的时候也是函数地址，那也可以直接使用这个指针变量
//}


//int main()
//{
//	( * (void (*)())0 )();//void (*)()函数指针类型
//	//( void (*)( ) )强制类型转换
//	//( void (*)( ) ) 0 ---将0强制类型转化为void (*)()的函数指针类型
//	//这意味着我们假设0地址处放着无参数，返回类型为void的函数
//	//最终是调用0地址处放的这个函数
//}

//void(* /*signal(int, void(*)(int))*/)(int);//函数声明
//int main()
//{
//	return 0;
//}



//typedef   类型重定义

//typedef unsigned int u_int;
//typedef int (*ppp)[5];//数组指针类型要将定义的名字放在*号旁边，ppp==int(*)[5]
//typedef void(*ppr)(int);//ppr就是void(* )(int)
//typedef int* prt_a;
//int main()
//{
//	unsigned int a1;
//	u_int a2;
//
//	ppp sa;//int (*sa)[5]; 一样
//
//	ppr a;//void(* a)(int);
//
//	prt_a p1;//int* p1;  一样
//	
//	return 0;
//}


//typedef int* prt_a;
//#define PTR_A int * //定义一个符号为PTR_A,内容为int *
//prt_a p1, p2;//p1和p2都是指针变量
//PTR_A p3, p4;//p3是指针变量,p4是整形，替换后int *p3,p4
 


//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int aee(int x, int y)
//{
//	return x - y;
//}
//int acc(int x, int y)
//{
//	return x * y;
//}
//int all(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int (*p)(int, int)=add;//函数指针
//	int (*p1[ ])(int, int) = {add,aee,acc,all};// p1是函数指针数组
//	for (int i = 0; i < 4; i++)
//	{
//		int a=p1[i](2, 3);
//		printf("%d\n",a);
//	}
//	return 0;
//}



//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void menu()
//{
//	printf("*************************\n");
//	printf("***** 1.add  2.sub ******\n");
//	printf("***** 3.mul  4.div ******\n");
//	printf("***** 0. exit      ******\n");
//	printf("*************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int r = 0;
//	//函数指针数组
//	//转移表
//	int (*pf[5])(int, int) = {0, Add, Sub, Mul, Div};
//	//                        0     1    2    3    4
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入2个操作数:");
//			scanf("%d %d", &x, &y);
//			r = pf[input](x, y);
//			printf("r = %d\n", r);
//		}
//		else if (input == 0)
//			printf("退出计算器\n");
//		else
//			printf("选择错误,重新选择\n");
//		
//	} while (input);
//
//	return 0;
//}



//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void menu()
//{
//	printf("*************************\n");
//	printf("***** 1.add  2.sub ******\n");
//	printf("***** 3.mul  4.div ******\n");
//	printf("***** 0. exit      ******\n");
//	printf("*************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int r = 0;
//	printf("请输入2个操作数:");
//	scanf("%d %d", &x, &y);
//	r = pf(x, y);
//	printf("r = %d\n", r);
//}
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误,重新选择\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}


//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}