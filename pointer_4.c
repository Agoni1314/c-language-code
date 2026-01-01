//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void print_arr(int arr[],int sc)
//{
//	for (int i = 0; i < sc; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
//print(int arr[], int sc)
//{
//	for (int i = 0; i < sc - 1; i++)
//	{
//		for (int j = 0; j < sc - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void tesc()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//	int sc = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sc);
//	print_arr(arr, sc);
//}
//int main()
//{
//	tesc();
//
//	return 0;
//}







//qsort用于不同数据的排序
//void qsort(void* base, //指针，指向的是待拍排序的数组的第一个元素
//	size_t num,//是base指向的待排序数组的元素个数
//	size_t size,//base指向的待排序的数组的元素大小
//	int(*compar)(const void*, const void*));//函数指针--指向的是两个元素的比较函数



//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//void print(int arr[], int sc)
//{
//	for (int i = 0; i < sc; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
//int comp_arr(const void* p1, const void* p2)
//{
//	if (*(int*)p1 > *(int*)p2)
//		/*{
//			return 1;
//		}
//		else if (*(int*)p1 == *(int*)p2)
//		{
//			return 0;
//		}
//		else
//		{
//			return -1;
//		}*/
//	{
//		return *(int*)p1 - *(int*)p2;
//	}
//}
//void test()
//{
//	int arr[10] = {9,8,7,6,5,4,3,2,1,0};
//	int sc = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr,sc,sizeof(arr[0]),comp_arr);
//	print(arr,sc);
//}
//int main()
//{
//	test();
//	return 0;
//}





//结构体指针
//#include <stdio.h>
//struct as
//{
//	char name[20];
//	int age;
//};
//void print(struct as* p)
//{
//	//printf("%s %d",(*p).name,(*p).age);    结构体变量“.”内容
//	printf("%s %d", p->name,p->age);//结构体指针“->”内容，“->”结构体成员间接访问操作符
//}
//
//int main()
//{
//	struct as s = { "zhaohong",13 };
//	print(&s);
//	return 0;
//}





//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>//strcmp 按照对应的字符ascii值来比较的
//struct sa
//{
//	char name[20];
//	int age;
//};
//int comp(const void* p1, const void* p2)
//{
//	return  strcmp(((struct sa*)p1)->name, ((struct sa*)p2)->name);//strcmp用于比较两个字符串的大小
//}
//int comp_age(const void* p1, const void* p2)
//{
//	return  ((struct sa*)p1)->age-((struct sa*)p2)->age;
//}
//
//void test()
//{
//	struct sa arr[3] = { {"zhangsan",21},{"lisi",25},{"wangwu",19}};
//	    int sc = sizeof(arr) / sizeof(arr[0]);
//		//qsort(arr,sc,sizeof(arr[0]),comp);
//		qsort(arr, sc, sizeof(arr[0]), comp_age);
//		for (int i = 0; i < sc; i++)
//		{
//			printf("%s %d\n",arr[i].name,arr[i].age);
//		}
//	
//}
//int main()
//{
//	test();
//
//	return 0;
//}





#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void print_arr(int arr[],int sc)
{
	for (int i = 0; i < sc; i++)
	{
		printf("%d ",arr[i]);
	}
}
print(int arr[], int sc)
{
	for (int i = 0; i < sc - 1; i++)
	{
		for (int j = 0; j < sc - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
void tesc()
{
	int arr[] = {9,8,7,6,5,4,3,2,1,0};
	int sc = sizeof(arr) / sizeof(arr[0]);
	print(arr, sc);
	print_arr(arr, sc);
}
int main()
{
	tesc();

	return 0;
}