#include<stdio.h>
#include<string.h>
typedef struct
{
	char id[10];
	char name[4];
	float chinese;
	float math;
	float english;
	float totle;
}
student;

student  students[10];
int studentcount = 0;
void inputstudent()
{
	int num1;
	printf("请输入学生数量： ");
	scanf("%d",&num1);
	for (int i = 0; i < num1; i++)
	{
		student s;//Student是我们自定义的结构体类型（包含学号、姓名、成绩等成员），s是这个类型的变量。它的本质是一块临时的内存空间，专门用来存放 “当前正在录入的那一个学生” 的所有信息
		printf("录入第%d名同学\n",i+1);
		printf("学号： ");
		scanf("%s\n",s.id);//去访问结构体中的数据用点运算符
		printf("姓名： ");
		scanf("%s\n", s.name);
		printf("语文成绩： ");
		scanf("%f\n", s.chinese);
		printf("数学成绩： ");
		scanf("%f\n", s.math);
		printf("英语成绩： ");
		scanf("%f\n", s.english);
		s.totle = s.chinese + s.math + s.english;
		students[studentcount++] = s;//每增加一个学生就加一，然后将s赋值给students数组中存储
	}
	print("录入完成\n");
}




void xianshistudentO()
{
	if (studentcount == 0)
	{
		printf("暂无此人\n");
		return 0;
	}
	else
	{
		printf("学生信息\n",studentcount);
		printf("%10s %4s %4s %4s %4s %5s","学号", "姓名", "语文", "数学", "英语", "总分");
		for (int q = 0; q < studentcount; q++)
		{
			printf("%10s %4s %.1f %.1f %.1f %.1f\n",students[q].id, students[q].name, students[q].chinese, students[q].math, students[q].english, students[q].totle );

		}
	}
}








void zhanshicaidan()
{
	printf("1.录入学生信息\n");
	printf("2.显示学生信息\n");
	printf("3.搜索学生信息\n");
	printf("4.修改学生信息\n");
	printf("5.添加学生信息\n");
	printf("6.删除学生信息\n");
	printf("7.按总分排名\n");
	printf("8.退出\n");
}




int main()
{
	int bianhao;
	while (bianhao)
	{
		zhanshicaidan();
		scanf("%d",&bianhao);
		switch(1)
		{
			case 1:
				inputstudent();
				break;
			case 2:
				xianshistudentO();
				break;
			case 3:
				reschstudent();
				break;
			case 4:
				xiugaistudent();
				break;
			case 5:
				addstudent();
				break;
			case 6:
				deldetstudent();
				break;
			case 7:
				paimingstudent();
				break;
			case 8:
				tuichu();
				break;

		}

	}
	return 0;
}