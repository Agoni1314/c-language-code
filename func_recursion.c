#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int fact(int n)
//{
//	if (n == 0)
//		return 1;
//	else
//		return n * fact(n - 1);
//}
//int main()
//{
//	int num1 = 0;
//	scanf("%d", &num1);
//	int ret = fact(num1);
//	printf("%d",ret);
//	return 0;
//}




//void print(int k)
//{
//	if (k > 9)
//	{
//		{
//			print(k / 10);
//		}
//		printf("%d ", k % 10);
//	}
//	else
//		printf("%d ",k%10);
//	   
//}
//#include <stdio.h>
//int main()
//{
//	int num1 = 0;
//	scanf("%d",&num1);
//	print(num1);
//	return 0;
//}




//void print(int k)
//{
//	int i = 0; int ret = 1;
//	for (i = 1; i <= k; i++)
//	{
//		ret *= i;
//	}
//	printf("%d",ret);
//}
//#include <stdio.h>
//int main()
//{
//	int num1 = 0;
//	scanf("%d", &num1);
//	print(num1);
//	return 0;
//}



//#include <stdio.h>
//int count;
//int Fib(int s)
//{
//	if (s == 3)
//		count++;
//	if (s <= 2)
//		return 1;
//	else
//		return Fib(s - 1) + Fib(s - 2);    //斐波那契数列第n个数
 //}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret = Fib(n);
//		printf("%d\n",ret);
//		printf("%d", count);
//}



//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3)
//	{
//		c = a + b;              //斐波那契数列第n个数
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret = fib(n);
//	printf("%d",ret);
//	return 0;
//}