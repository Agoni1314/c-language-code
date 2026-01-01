#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 2; int b = 3;
//	int c =add (a, b);
//	printf("%d", c);
//	return 0;
//}





//int test(int a)
//
//{
//	int b = 0; int c = 0;
//
//	if (a <= 0)
//		return;
//	else
//
//		for (b = 1; b <= a; b++)
//		{
//			c += b;
//
//		}
//	return c;
//}
//
//	int main()
//	{
//		int k = 0;
//		test(5);
//		k = test(5);
//		printf("%d", k);
//		return 0;
//		
//	}





//void test(int a)
//{
//	int b = 0; int c = 0;
//	if (a <= 0)
//		return;
//	else
//		for (b = 1; b <= a; b++)
//		{
//			c += b;
//		}
//	printf("%d", c);
//}
//int main()
//{
//	test(5);
//	return 0;
//}





//int test()
//{
//	return 3.14;
//}
//int main()
//{
//	int b = test();
//	printf("%d", b);
//}




//int test(int a);
//{
//
//	if (a % 2 == 1)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int b = test(5);
//	printf("%d", b);
//	return 0;
//	
//}





//void set_arr(int arr[], int k)
//{
//	int a = 0;
//	for (a = 0; a < k; a++)
//	{
//		arr[a] = -1;
//	}
//
//}
//void printf_arr(int arr[], int m)
//{
//	for (int c = 0; c < m; c++)
//	{
//		printf("%d", arr[c]);
//	}
//
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	set_arr(arr, sz);
//	printf_arr(arr, sz);
//	return 0;
//}


//int set_year(int c)
//{
//	if ((c % 4 == 0 && c % 100 != 0) || (c % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int get_year_month(int a, int b)
//{
//	int arr[] = { 0,31,28,31,30,31,30,31,31,30,31 };
//	int day = arr[b];
//	if (set_year(a) && b == 2)
//		day += 1;
//	return day;
//}
//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	scanf("%d %d", &year, & month);
//	int dayss = get_year_month(year,month);
//	printf("%d", dayss);
//	return 0;
//
//
//}
//
//


int main()
{
	char a=65;
	printf("%c", a+32);

}
