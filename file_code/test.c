#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//⼆进制的形式写到⽂件中
//		fclose(pf);
//	    pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pr=fopen("test.txt", "r");
//	if (pr == NULL)
//	{
//		perror("fopen");
//		return 1;//异常退出
//	}
//	fclose(pr);
//	pr = NULL;
//
//		return 0;
//}

//int main()
//{
//	FILE* pr = fopen("test.txt", "w");
//	if (pr == NULL)
//	{
//		perror("fopen");
//		return 1;//异常退出
//	}
//	fclose(pr);
//	pr = NULL;
//	return 0;
//}


//int main()
//{
//	//打开文件
//	FILE* pr = fopen("test.txt","w");
//	if (pr == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	/*fputc('a', pr);
//	fputc('b', pr);
//	fputc('c', pr);*/
//	int ch = 'a';
//	for (ch = 'a'; ch <= 'z'; ch++)
//	{
//		fputc(ch, pr);
//	}
//	//关闭文件
//	fclose(pr);
//	pr = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pr = fopen("test.txt", "r");
//	if (pr == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//int ch=fgetc(pr);
//	//printf("%c\n", ch);
//
//	//ch = fgetc(pr);
//	//printf("%c\n", ch);
//
//	//ch = fgetc(pr);
//	//printf("%c\n", ch);
//
//	//ch = fgetc(pr);
//	//printf("%c\n", ch);
//
//	//ch = fgetc(pr);
//	//printf("%c\n", ch);
//	int ch = 0;
//	while ((ch = fgetc(pr))!= EOF)
//	{
//		printf("%c ",ch);
//	}
//	fclose(pr);
//	pr = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pr = fopen("test.txt", "w");
//		if (pr == NULL)
//		{
//			perror("fopen");
//			return 1;
//		}
//		fputs("hello world\n", pr);
//		fputs("hello world\n", pr);
//		fputs("hello world\n", pr);
//	return 0;
//}


//int main()
//{
//	FILE* pr = fopen("test.txt", "r");
//			if (pr == NULL)
//			{
//				perror("fopen");
//				return 1;
//			}
//			char ch[20] = { 0 };
//			/*fgets(ch, 10, pr);
//			printf("%s", ch);*/
//			while ((fgets(ch, 20, pr)) != NULL)
//			{
//				printf("%s\n", ch);
//			}
//			fclose(pr);
//			pr = NULL;
//	return 0;
//}
//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = { "张三",20,65.5f };
//	FILE* pr = fopen("test.txt", "w");
//	if (pr == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fprintf(pr, "%s %d %f", s.name, s.age, s.score);
//	fclose(pr);
//	pr = NULL;
//	return 0;
//}
//int main()
//{
//	struct S s = { "张三",20,65.5f };
//	FILE* pr = fopen("test.txt", "r");
//	if (pr == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fscanf(pr, "%s %d %f", s.name, &(s.age), &(s.score));
//	printf("%s %d %f", s.name, s.age, s.score);
//	fclose(pr);
//	pr = NULL;
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	FILE* pr = fopen("test.txt", "wb");
//	if (pr == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	fwrite(arr, sizeof(arr[0]), sz, pr);//以二进制形式写进去
//	fclose(pr);
//	pr = NULL;
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 0 };
//	FILE* pr = fopen("test.txt", "rb");
//	if (pr == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fread(arr, sizeof(arr[0]), 5, pr);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	fclose(pr);
//	pr = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pr = fopen("test.txt", "rb");
//	if (pr == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	int ch = fgetc(pr);
//	printf("%c\n",ch );
//	//fseek(pr,4 , SEEK_CUR);
//	fseek(pr, 5, SEEK_SET);
//	ch = fgetc(pr);
//	printf("%c\n", ch);
//	fclose(pr);
//	pr = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pr = fopen("test.txt", "r");
//	if (pr == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	int ch = fgetc(pr);
//	printf("%c\n", ch);
//	fseek(pr, 0, SEEK_END);
//	printf("%d\n", ftell(pr));
//	rewind(pr);
//	ch = fgetc(pr);
//	printf("%c\n", ch);
//	fclose(pr);
//	pr = NULL;
//	return 0;
//}

int main()
{
	FILE* pr = fopen("test.txt", "r");
	if (pr == NULL)
	{
		perror("fopen");
		return 1;
	}
	char  ch = 0;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		fputc(ch, pr);
	}
	if (feof(pr))
	{
		printf("尾部");
	}
	else if (ferror(pr))
	{
		perror("fgetc");
	}
	return 0;
}
