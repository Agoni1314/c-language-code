#pragma once
#define  _CRT_SECURE_NO_WARNINGS
#pragma once
#define NAME_MAX 20
#define GENDER_MAX 10
#define TEL_MAX 20
#define ADDR_MAX 100
typedef struct personInfo
{
	char name[NAME_MAX];//姓名
	char gender[GENDER_MAX];//性别
	int age;
	char tel[TEL_MAX];//电话
	char addr[ADDR_MAX];
}peoInfo;
struct SeqList;
//通讯录相关的方法  初始化  销毁 添加 删除
// 改名字,把结构体改为通讯录
typedef struct SeqList Contact;//交叉使用头文件，代码会报错，应该用前置声明
//通讯录的初始化
void ContactInit(Contact* con);
//销毁
void ContactDes(Contact* con);
//添加
void ContactAdd(Contact* con);
//删除
void ContactDel(Contact* con);
//修改
void ContactModify(Contact* con);
//查找
void ContactFind(Contact* con);
//展示通讯录
void ContactShow(Contact* con);