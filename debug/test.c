//size_t my_strlen(const char* s)
//{
//	if (*s == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(s + 1);
//}
//#include <stdio.h>
//int main()
//{
//	char arr[] = "abcdefg";
//	size_t len = my_strlen(arr);
//	printf("%zd\n", len);
//	return 0;
//}

//#define  _CRT_SECURE_NO_WARNINGS
//void my_strcpy(char* s, const char* c)
//{
//	assert(c != NULL);
//	assert(s != NULL);
//	while (*c != '\0')//拷贝\0前面的内容
//	{
//		*s = *c;
//		s++;
//		c++;
//	}
//	*s = *c;//拷贝\0后面的内容
//}
//#include <stdio.h>
//int main()
//{
//	char arr1[] = "hello bit";
//	char arr2[20] = "xxxxxxxxxxxxx";
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}



//#include <stdio.h>
//add(int c, int d)
//{
//	return c + d;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int my_add=add(a, b);
//	printf("%d\n", my_add);
//	return 0;
//}




//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int add(int d, int e)
//{
//	return d+e;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int r = add(a, b);
//	printf("%d\n", r);
//	return 0;
//}



//#define  _CRT_SECURE_NO_WARNINGS
//void set_arr(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		arr[i] = -1;
//	}
//}
//void print_arr(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	set_arr(arr,sz);
//	print_arr(arr,sz);
//	return 0;
//}
//


//#define  _CRT_SECURE_NO_WARNINGS
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int get_days_of_month(int y, int m)
//{
//	int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int day = days[m];
//	if (is_leap_year(y) && m == 2)
//		day += 1;
//	return day;
//}
//#include <stdio.h>
//int main()
//{
//	int y = 0;
//	int m = 0;
//	scanf("%d %d", &y, &m);
//	int d = get_days_of_month(y, m);
//	printf("%d\n", d);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//		return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("%d\n", strlen("abcdef"));
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}


//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int is_leap_year(int y);//函数的声明
//int main()
//{
//	int y = 0;
//	scanf("%d", &y);
//	int r = is_leap_year(y);
//	if (r == 1)
//		printf("闰年\n");
//	else
//		printf("⾮闰年\n");
//	return 0;
//}
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}



//#include <stdio.h>
//void test()
//{
//	static int i = 0;//static修饰局部变量
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		test();
//	}
//	return 0;
//}


#include <stdio.h>
#include<stdlib.h>
int main()
{
	int* p = (int*)malloc(5 * sizeof(int));
	if (p == NULL)
	{
		perror("malloc");
		return 1;
	}
	else
	{
		for (int i = 0; i < 5; i++)
		{
			*(p + i) = i + 1;
		}
	}
	int* ptr = (int*)realloc(p, 40000);
	
	if (ptr == NULL)
	{
		perror("realloc");
	}
	else
	{
		p = ptr;
		for (int i = 5; i < 10; i++)
		{
			*(p + i) = i + 1;
		}
		for (int i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	return 0;
}