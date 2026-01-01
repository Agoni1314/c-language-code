#include"danlianbiao.h"
void print(SL* phead)
{
	SL* pro = phead;
	while (pro)
	{
		printf("%d->", pro->data);
		pro = pro->next;
	}
	printf("NULL\n");
}
//申请一个节点
 SL*newjiedian(zx x)
{
	SL* new = (SL*)malloc(sizeof(SL));
	if (new == NULL)
	{
		perror("malloc");
	}
	else
	{
		new->data = x;
		new->next=NULL;
		return new;
	}
}
//尾插
void weicha(SL** pphead, zx x)//传值调用和传址调用
{
	//分类空链表和非空链表
	SL* newkongjian = newjiedian(x);
	if (*pphead == NULL)
	{
		*pphead = newkongjian;
	
	}
	else
	{
		SL* new = *pphead;
		while (new->next)
		{
			new = new->next;
		}
		new->next = newkongjian;
	}
}
//头插
void toucha(SL** ppend, zx x)
{
	
	SL* newkongjian = newjiedian(x);
		newkongjian->next = *ppend;
		*ppend = newkongjian;
}
//尾删
void weishan(SL** ppend)
{
	assert(*ppend);
	//有一个节点和多个节点
	if ((*ppend)->next== NULL)//只有一个节点
	{
		free(*ppend);
		*ppend = NULL;
	}
	else
	{
		SL* new = *ppend;
		SL* news = *ppend;
		while (news->next)
		{
			new = news;
			news = news->next;
		}
		free(news);
		new->next  = NULL;
	}
}
//头删
void toushan(SL** pphead)
{
	assert(*pphead);
	SL* newtou = (*pphead)->next;
	free(*pphead);
	*pphead = newtou;
}
//查找
SL* chazhao(SL* pphead, zx x)
{
	SL* new = pphead;
	while (new)//这里不用new->next，因为这是下一个节点的条件，而if语句里面是当前的数据，就会忽略最后一个节点的数据
	{
		if (new->data == x)
		{
			return new;
		}
		new=new->next;
	}
	return NULL;
}
//在指定位置之前插入
void zhidingcha(SL** pphead, SL* pos, zx x)
{
	SL* sc=newjiedian(x);
	SL* posqian = *pphead;
	if (*pphead == pos)
	{
		//toucha(pphead,x);
		sc->next = *pphead;
		*pphead = sc;
	}
	else
	{
		while (posqian->next != pos)
		{
			posqian = posqian->next;
		}
		sc->next = pos;
		posqian->next = sc;
	}
}
//后入
void houru( SL* pos, zx x)
{
	assert(pos);
	SL* news = newjiedian(x);
	news->next = pos->next;
	pos->next = news;
}
//删除pos节点
void shanpos(SL** pphead, SL* pos)
{
	//分为是否为头节点和不是头结点
	if (*pphead == pos)
	{
		toushan(pphead);
	}
	else
	{
		SL* news = *pphead;
		while (news->next !=pos)
		{
			news = news->next;
		}
		news->next = pos->next;
		free(pos);
		pos = NULL;
		return -1;
	}
}
//删除pos之后节点
void shanposhou(SL* pos)
{
	SL* pl = pos->next;
	pos->next = pl->next;
	free(pl);
	pl = NULL;
}
//销毁链表
void xiaohui(SL** pphead)
{
	assert(pphead && *pphead);
	SL* news = *pphead;
	while (news)
	{
		SL* cs = news->next;
		free(news);
		news =cs;
	}
	*pphead = NULL;
}

