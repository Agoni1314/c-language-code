#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include"cs.h"
typedef int HPDataType;
typedef struct Binary_tree
{
	HPDataType data;
	struct Binary_tree* left;
	struct Binary_tree* right;
}HPNode;
HPNode* BuyNode(int x)
{
	HPNode* root = (HPNode*)malloc(sizeof(HPNode));
	if (root == NULL)
	{
		perror("malloc");
		return NULL;
	}
	root->data = x;
	root->left = root->right = NULL;
	return root;
}
HPNode*  CreatBinarTree()
{
	HPNode* node1 = BuyNode(1);
	HPNode* node2 = BuyNode(2);
	HPNode* node3 = BuyNode(3);
	HPNode* node4 = BuyNode(4);
	HPNode* node5 = BuyNode(5);
	HPNode* node6 = BuyNode(6);
	HPNode* node7 = BuyNode(7);
	node1->left = node2;
	node1->right = node3;
	node2->left = node4;
	node2->right = node5;
	node3->left = node6;
	node3->right = node7;
	return node1;
}
void PrevOrder(HPNode* root)
{
	if (root == NULL)
	{
		printf("N ");
		return;
	}
	printf("%d ", root->data);
	PrevOrder(root->left);
	PrevOrder(root->right);
	
}
void InOrder(HPNode* root)
{
	if (root == NULL)
	{
		printf("N ");
		return;
	}
	InOrder(root->left);
	printf("%d ", root->data);
	InOrder(root->right);

}
void EndOrder(HPNode* root)
{
	if (root == NULL)
	{
		printf("N ");
		return;
	}
	EndOrder(root->left);
	EndOrder(root->right);
	printf("%d ", root->data);
}
//int TreeSize(HPNode* root, int* psize)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	++(*psize);
//	TreeSize(root->left, psize);
//	TreeSize(root->right, psize);
//	return *psize;
//}
int TreeSize(HPNode* root)
{
	return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
}
int TreeLeafSize(HPNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	if (root->left == NULL && root->right == NULL)
	{
		return 1;
	}
	return TreeLeafSize(root->left) + TreeLeafSize(root->right);
}
//int TreeLeafHight(HPNode* root)
//{
//
//	if (root == NULL)
//	{
//		return 0;
//	}
//	return  TreeLeafHight(root->left) > TreeLeafHight(root->right) ? TreeLeafHight(root->left) + 1 :
//		TreeLeafHight(root->right) + 1;
//}
int fmax(int x, int y)
{
	return x > y ? x : y;
}
int TreeLeafHight(HPNode* root)
{
	if (root == NULL)
		return 0;
	return fmax(TreeLeafHight(root->left), TreeLeafHight(root->right))+1;
}
int TreeLeafKHight(HPNode* root, int x)
{
	if(root==NULL)
		return 0;
	if (x == 1)
		return 1;
	return (TreeLeafKHight(root->left, x - 1) + TreeLeafKHight(root->right, x - 1));
}
HPNode* TreeFind(HPNode* root, HPDataType x)
{
	if (root == NULL)
		return 0;
	if (x==root->data)
		return root;
	HPNode* ret1=TreeFind(root->left, x);
	if (ret1)
		return ret1;
	HPNode* ret2 = TreeFind(root->right, x);
	if (ret2)
		return ret2;
	/*HPNode* ret1 = TreeFind(root->left, x);
	if (ret1)
		return ret1;
	return TreeFind(root->right, x);*/
	return NULL;
}
//销毁
void TreeDestroy(HPNode* root)
{
	if (root == NULL)
		return;
	TreeDestroy(root->left);
	TreeDestroy(root->right);
	free(root);
}
void TreeLevelOrder(HPNode* root)
{
	Queue q;
	QueueInit(&q);
	
	if (root)
		QueuePush(&q, root);
	while (!QueueEmpty(&q))
	{
		HPNode* front = QueueFront(&q);
		QueuePop(&q);
		printf("%d ", front->data);
		if (front->left)
			QueuePush(&q, front->left);
		if (front->right)
			QueuePush(&q, front->right);
	}
	QueueDestroy(&q);
}
//判断二叉树是否是完全二叉树
int TreeComplete(HPNode* root)
{
	Queue q;
	QueueInit(&q);

	if (root)
		QueuePush(&q, root);
	while (!QueueEmpty(&q))
	{
		HPNode* front = QueueFront(&q);
		QueuePop(&q);
		//遇到第一个NULL就可以判断了，如果对列中还有非空，就不是完全二叉树
		if (front == NULL)
			break;
		QueuePush(&q, front->left);
		QueuePush(&q, front->right);
	}
	while (!QueueEmpty(&q))
	{
		HPNode* front = QueueFront(&q);
		QueuePop(&q);
		if (front)
		{
			QueueDestroy(&q);
			return false;
		}
	}
	QueueDestroy(&q);
	return true;
}
int main()
{
	HPNode* root = CreatBinarTree();
	/*PrevOrder(root);
	printf("\n");
	InOrder(root);
	printf("\n");
	EndOrder(root);*/

	/*int size = 0;
	printf("TreeSize:%d\n", TreeSize(root, &size));*/

	/*printf("TreeSize:%d\n", TreeSize(root));
	printf("TreeLeafSize:%d\n", TreeLeafSize(root));
	printf("TreeLeafHight:%d\n", TreeLeafHight(root));
	printf("TreeLeafKHight:%d\n", TreeLeafKHight(root, 2));
	HPNode* FindNode=TreeFind(root, 5);
	if (FindNode)
	{
		printf("%d\n", FindNode->data);
	}
	else
	{
		printf("没有");
	}*/
	TreeLevelOrder(root);
	printf("\n");
	TreeDestroy(root);
	root = NULL;
	return 0;

	

}