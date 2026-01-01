#define  _CRT_SECURE_NO_WARNINGS
#include "List.h"
void ListTest01()
{
	/*LTNode* plist = NULL;
	LTInit(&plist);*/
	LTNode* plist = LTInit();
	LTPushBack(plist, 1);
	print(plist);
	LTPushBack(plist, 2);
	print(plist);
	LTPushBack(plist, 3);
	print(plist);
	LTPushFront(plist, 4);
	print(plist);
	LTPushFront(plist, 5);
	print(plist);
	LTPushFront(plist, 6);
	print(plist);
	/*LTPopBack(plist);
	print(plist);
	LTPopBack(plist);
	print(plist);
	LTPopFront(plist);
	print(plist);
	LTPopFront(plist);
	print(plist);
	LTPopFront(plist);
	print(plist);*/
	LTNode* ret=LTFind(plist,1);
	LTInsert(ret, 666);
	print(plist);
	LTErase(ret);
	print(plist);
	LTDesTroy(plist);
	plist = NULL;
	print(plist);

	/*if (ret == NULL)
	{
		printf("ц╩сп");
	}
	else
	{
		printf("сп");
	}*/

}
int main()
{
	ListTest01();
	return 0;
}
