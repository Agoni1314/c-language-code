//目前向内存申请空间就只有创建变量和数组，一旦申请好空件就不能调整
//malloc函数申请空间

//#include <stdio.h>
//int main()
//{
//	int * p=(int *)malloc(20);
//	if (p == NULL)
//	{
//		perror("malloc\n");
//		return 1;
//	}
//	//使用空间
//	for (int i = 0; i < 5; i++)
//	{
//		*(p + i) = i + 1;
//	}
//
//	//释放空间free函数
//	free(p);//free函数不会将释放的指针变为空指针，这样的话就会陷入野指针
//	p = NULL;
//	return 0;
//}




//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{//calloc函数会将开辟的空间初始化为0
//	int *p=(int *)calloc(10, sizeof(int));
//	if(p != NULL)
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//		free(p);
//		p = NULL;
//	}
//	return 0;
//}



//#include <stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int * p=(int*)malloc(5 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	else
//	{
//		for (int i = 0; i < 5; i++)
//		{
//			*(p + i) = i + 1;
//		}
//	}
//	int * ptr=(int *)realloc(p, 40);
//	
//	if (ptr == NULL)
//	{
//		perror("realloc");
//	}
//	else
//	{
//		p = ptr;
//		for (int i = 5; i < 10; i++)
//		{
//			*(p + i) = i + 1;
//		}
//		for (int i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}//使用realloc来扩张内存空间时有2种情况，1是剩余空间足够就在后面补
//	return 0;//2就是剩余空间不能就拷贝一份到堆区的另一个空间再释放刚才的空间
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int *p = (int*)malloc(99999999999999);
//	if (p == NULL)
//	{                       //空间开辟失败
//		perror("");
//	}
//	return 0;
//
//}



//#include <stdio.h>
//#include <stdlib.h>
//void getmemory(char* p)//p指针是形参，是一块独立的空间，所以距只能在getmemory函数中使用
//{
//	p = (char*)malloc(100);
//}
//void test()
//{
//	char* str = NULL;
//	getmemory(str);//将str的空指针传递给了p指针
//	strcpy(str, "hello world!");
//	printf(str);
//}
//int main()
//{
//	test();
//	return 0;//没有释放空间就结束程序
//}

//改正（）方案一
//#include <stdio.h>
//#include <stdlib.h>
//void getmemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void test()
//{
//	char* str = NULL;
//	getmemory(&str);
//	strcpy(str, "hello world!");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}

//方案二
//#include <stdio.h>
//#include <stdlib.h>
// char* getmemory()
//{
//	char* p = (char*)malloc(100);
//	return p;
//}
//void test()
//{
//	char* str = NULL;
//	str=getmemory();
//	strcpy(str, "hello world!");
//	printf(str);
//}
//int main()
//{
//	test();
//	return 0;
//}


//题目2
//#include <stdio.h>
//#include<stdlib.h>
//char* getmemory()
//{
//	char p[] = "hello world";
//	return p;
//}
//void test()
//{
//	char* str = NULL;
//	str = getmemory();
//}
//int main()
//{
//	test();
//	return 0;
//}

//题目3
//#include <stdio.h>
//#include <stdlib.h>
//void test()
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "world!");
//		printf("%s",str);
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}




 