
#include "Contact.h"
#include "SeqList.h"
//通讯录的初始化
void ContactInit(Contact* con)//sl
{
	//实际上要进行的是顺序表的初始化
	//顺序表的初始化已经实现好了
	SLInit(con);
}
//销毁
void ContactDes(Contact * con)
{
	SLDestroy(con);
}
//添加
void ContactAdd(Contact* con)
{
	peoInfo info;
	printf("请输入联系人姓名\n");
	scanf("%s",info.name);
	printf("请输入联系人性别\n");
	scanf("%s", info.gender);
	printf("请输入联系人年龄\n");
	scanf("%d", &info.age);
	printf("请输入联系人电话\n");
	scanf("%s", info.tel);
	printf("请输入联系人地址\n");
	scanf("%s", info.addr);
	//插入数据
	SLPushBack(con, info);
}
//删除(删除之前要看里面是否有数据)
int FindByName(Contact* con, char name[])//根据名字查找
{
	for (int i = 0; i < con->size; i++)
	{
		if (0 == strcmp(con->arr[i].name, name))
		{
			//找到了
			return i;
		}
	}
	return -1;
}
void ContactDel(Contact* con)
{
	char name[NAME_MAX];
	printf("请输入要删除的联系人\n");
	scanf("%s", name);
	int find = FindByName(con, name);
	if (find < 0)
	{
		printf("不存在\n");
		return;
	}
	//要删除的联系人存在
	SLErase(con, find);
	printf("删除成功\n");
}
//展示
void  ContactShow(Contact* con)
{
	//表头：姓名 性别 年龄 电话 地址
	printf("%s %s %s %s %s\n", "姓名", "性别", "年龄", "电话", "地址");
	for (int i = 0; i < con->size; i++)
	{
		printf("%3s %3s %3d %3s %3s\n", con->arr[i].name, con->arr[i].gender, con->arr[i].age, con->arr[i].tel, con->arr[i].addr);
	}
}
//查找
void ContactModify(Contact* con)
{
	//要修改的联系人的数据存在
	char name[NAME_MAX];
	printf("请输入要查找的人\n");
	scanf("%s", name);
	int find = FindByName(con, name);
	if (find < 0)
	{
		printf("不存在\n");
		return;
	}
	//直接修改
	printf("请输入新的姓名\n");
	scanf("%s", con->arr[find].name);

	printf("请输入新的性别\n");
	scanf("%s", con->arr[find].gender);
	
	printf("请输入新的年龄\n");
	scanf("%d", &con->arr[find].age);
	
	printf("请输入新的电话\n");
	scanf("%s", con->arr[find].tel);
	
	printf("请输入新的地址\n");
	scanf("%s", con->arr[find].addr);
	
	printf("修改成功\n");
}
//查找
void ContactFind(Contact* con)
{
	char name[NAME_MAX];
	printf("请输入要查的人\n");
	scanf("%s\n", name);
	int find = FindByName(con, name);
	if (find < 0)
	{
		printf("不存在\n");
		return;
	}
	printf("%s %s %s %s %s\n", "姓名", "性别", "年龄", "电话", "地址");
	
		printf("%3s %3s %3d %3s %3s\n", con->arr[find].name, con->arr[find].gender, con->arr[find].age, con->arr[find].tel, con->arr[find].addr);
	
}
