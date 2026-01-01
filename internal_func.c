//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
// void* my_memcpy(void* dest, void* src,size_t num)
//{
//	 void* p = dest;
//	 assert(dest && src);
//	 for (int i = 0; i < 20; i++)//使用char*类型的指针解引用访问一个字节
//	 {
//		 *(char*)dest = *(char*)src;
//		 src = (char*)src + 1;
//		 dest = (char*)dest + 1;
//	 }
//	 return p;
//}
//int main()
//{//memcpy拷贝完后会返回目标空间的起始地址,但原地址和目标地址有任何重叠的话复制的结果就未定义，此时需要memmove
//	int arr1[] = {1,2,3,4,5,6,7,8,9,10};
//	int arr2[20] = { 0 };
//	my_memcpy(arr2, arr1,20);//20个字节，就传过去5个元素
//	for (int i = 0; i < 20; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}


//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>//memmove拷贝完后会返回目标空间的起始地址
//#include <assert.h>
//void* my_memmove(void* dest, const void* srt,size_t num)
//{
//	assert(dest && srt);
//	if (dest < srt)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)srt;
//			dest = (char*)dest + 1;
//			srt = (char*)srt + 1;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)srt + num);
//		}
//	}
//}
//int main()
//{
//	int  arr[] = {1,2,3,4,5,6,7,8,9,10};
//	my_memmove(arr + 2, arr, 5 * sizeof(int));
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}


//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	/*char arr[] = "hello world!";
//	memset(arr+1, 'x', 5);
//	printf("%s\n", arr);*/
//
//	/*int arr[5] = { 0 };
//	memset(arr,1,20);
//	for(int i = 0; i < 5; i++)
//	{
//		printf("%d ",arr[i]);   memset做不到以不同数据类型元素的单位，单位就是字节
//	}*/
//	return 0;
//}


#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr1[] = {1,2,3,4,9,6,7};
	int arr2[] = {1,2,3,4,8,8,8};
	int ret= memcmp(arr1, arr2, 28);//比较20个字节，但是在20哥字节之前就比较出了大小就返回真假值
	printf("%d\n", ret);
	return 0;
}