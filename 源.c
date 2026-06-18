//#include <stdio.h>
//int main()
//{
//	int a = -6;
//	int b = (a << 1);
//	printf("%d\n%d", a, b);
//	return 0;
//}



//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//struct student
//{
//	char name[20];
//	char id[16];
//	int age;
//	int high;
//	float wieght;
//}s4,s5,s6;
//
//int main()
//{
//	struct student s1 = {"张三","202512234",20,180,75.5f};//初始化结构体变量
//	struct student s2 = {.age=12,.name="李四",.wieght=80.5f,.high=189,.id="1234567"};
//	struct student s3;
//	printf("%s %s %d %d %.1f",s1.name,s1.id,s1.age,s1.high,s1.wieght);
//	return 0;
//}




//
//#define  _CRT_SECURE_NO_WARNINGS
//struct s
//{
//	char c;
//	int n;
//};
//struct b
//{
//	struct s a;
//	int* p;
//	char arr[10];
//	float sc;
//};
//#include <stdio.h>
//int main()
//{
//	struct b x = { {'w',80,},NULL,"hehe",85.5f };//85.5后面没有f，编译器会认为这是一个double类型的值
//	printf("%c\n",x.a.c);
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	char a = 127;
//	char b = 3;
//	char c = a + b;
//	printf("%d",c);
//	return 0;
//}


//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%p",&a);
//	return 0;
//}



//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//
//	//printf("%zd\n",sizeof(int*));
//	//printf("%zd\n", sizeof(char*));
//	//printf("%zd\n", sizeof(float*));
//	//printf("%zd\n", sizeof(double*));
//	int a = 0x12345678;
//	char* p = &a;
//	*p=0; 
//	return 0;
//}



//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	char* p = &a;
//	*p = 0;       //虽然不同类型的指针大小一样，但是指针类型决定了指针进行解引用操作符时访问几个字节
//	return 0;
//}



//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n",pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);  //指针类型决定了加1或减1一次走多远的距离 
//	return 0;
//}



//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	char str[] = "hello world!";
//	char* p = str;
//	while (*p != '\0')
//	{
//		printf("%c ",*p);
//		p++;
//	}
//	return 0;//p是一个指针变量，将数组首元素地址传过去后，对p进行解引用后通过p里面的地址访问该地址的内容
//}




//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	  char str[] = "hello world!";
//	  char* p = str;
//	  while (*p != '\0')
//	  {
//		  printf("%c ", *p);
//		  p++;
//		}
//	return 0;
//}




//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	char str[] = "hello";
//	int i = 0;
//	while (*(str + i) != '\0')
//	{
//		printf("%c ",*(str+i));//,*(str+i)==str[i],在数组中会将首元素除了才“&数组名”和“sizeof数组名”不会退化之外其他情况会退化为“指针常量”（不能改变）
//		i++;
//	}
//	return 0;
//}





//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	char* c = &a;
//	printf("%p\n%p",p,c);
//	return 0;
//}


//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	float b=0.0f;
//	void* p = &b;
//	void* s = &a;
//	
//	p = p + 2;//因为void的类型大小不确定，所以编译器就不知道该前进几个字节
//	return 0;
//}


//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//const  int a = 20;//虽然const让变量变为常量，但本质上还是变量
//	a = 200;
//	printf("%d",a);
//	return 0;
//}


//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	 int a = 10;
//	int b = 12;
//	int * const p = &a;     const放在*后面表示指针变量不能改变
//	p = &b;
//	printf("%p",p);//虽然不能明面上改，但可以通过取地址后再放在p的指针变量时候改
//	return 0;
//}


//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 12;
//	int const*  p = &a;
//	//*p = 200; const放在*前面代表p指向的指针变量的内容不能改变
//	printf("%p",p);
//	return 0;
//}




//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int * p=&arr[0];
//	int sc = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sc; i++)
//	{
//		printf("%d ",*(p+i));
//		
//	}
//	return 0;
//}



//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int arr[10];
//	printf("%zd\n",&arr[0]-&arr[9]);  '''指针减去指针的前提条件是两个指针都指向同一个空间
//	return 0;                       并且结果类型为ptrdiff_t,%zd就适配这种类型'''
//}


//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#define NDEBUG
//#include <assert.h>
//sc(char const* str)
//{
//	char* strat = str;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		str++;
//
//	}
//	return str - strat;//指针减去指针
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	int len = sc(arr);
//	printf("%d",len);
//	return 0;
//}



//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = "abcdefg";
//	int len = strlen(arr);
//	int sc = sizeof(arr) / sizeof(arr[0]);
//	char * p = arr;
//	if (p < p + sc)
//		while (*p != '\0')
//		{
//			
//			printf("%c ",*p);
//			p++;
//	}
//	return 0;
//}


//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//size_t my_strlen(char const * sc)
//{
//	size_t count = 0;
//	assert (sc != NULL);
//		while (*sc!= '\0')
//		{
//			count++;
//			sc++;
//		}
//		return count;
//}
//int main()
//{
//	char arr[] ="abcdrfg";
//	size_t len=my_strlen(arr);
//	printf("%d",len);
//	return 0;
//}


//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void swp1(int* x, int* y)
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前a=%d  b=%d\n",a,b);
//	swp1(&a,&b);
//	printf("交换前a=%d  b=%d",a,b);
//	return 0;
//}