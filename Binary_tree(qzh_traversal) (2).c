#include<stdio.h>
#include<stdlib.h>
typedef int HPDataType;
typedef struct Binaty_tree
{
	HPDataType* data;
	struct Binaty_tree* left;
	struct Binaty_tree* right;
}BTNode;
BTNode* BuyNode(int x)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	if (node == NULL)
	{
		perror("malloc");
		return NULL;
	}
	node->data = x;
	node->left = node->right = NULL;
}
BTNode* CreatBinaryTree()
{
	BTNode* node1 = BuyNode(1);
	BTNode* node2 = BuyNode(2);
	BTNode* node3 = BuyNode(3);
	BTNode* node4 = BuyNode(4);
	BTNode* node5 = BuyNode(5);
	BTNode* node6 = BuyNode(6);
	BTNode* node7 = BuyNode(7);
	node1->left = node2;
	node1->right = node4;
	node2->left = node3;
	node4->left = node5;
	node4->right = node6;
	node6->right = node7;
	return node1;
}
void PrevOrder(BTNode* root)//前序遍历
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
void InOrder(BTNode* root)//中序遍历
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
void EndOrder(BTNode* root)//后序遍历
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
//int TreeSize(BTNode* root,int* psize)//方法1
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		++(*psize);
//		TreeSize(root->left, psize);
//		TreeSize(root->right, psize);
//	}
//	return *psize;
//}
//方法2
int TreeSize(BTNode* root)
{
	return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
}
int TreeLeafSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	if (root->left == NULL && root->right == NULL)
		return 1;
	else
		return TreeLeafSize(root->left) + TreeLeafSize(root->right);
}
//int TreeLeafHight(BTNode* root)//oj过不了,有效率问题
//{
//	if (root == NULL)
//		return 0;
//	else
//		return  TreeLeafHight(root->left) > TreeLeafHight(root->right) ?
//		TreeLeafHight(root->left) + 1 : TreeLeafHight(root->right) + 1;
//}


//int TreeLeafHight(BTNode* root)
//{
//	if (root == NULL)
//		return 0;
//	int leftHight = TreeLeafHight(root->left);
//	int rightHight = TreeLeafHight(root->right);
//	return  TreeLeafHight(root->left) > TreeLeafHight(root->right) ?
//				TreeLeafHight(root->left) + 1 : TreeLeafHight(root->right) + 1;
//	
//}

int fmax(int x, int y)
{
	return x > y ? x : y;
}
int TreeLeafHight(BTNode* root)
{
	if (root == NULL)
		return 0;
	return fmax (TreeLeafHight(root->left),TreeLeafHight(root->right)) + 1;
}
//求第k层的个数
int TreeLeafKHight(BTNode* root, int k)
{
	if (root == NULL)
		return 0;
	if (k == 1)
		return 1;
	//子问题
	return TreeLeafKHight(root->left, k - 1) + TreeLeafKHight(root->right, k - 1);
}
//查找值为x的节点
BTNode* TreeFind(BTNode* root, HPDataType x)
{

}
int main()
{
	BTNode* root = CreatBinaryTree();
	PrevOrder(root);
	printf("\n");
	InOrder(root);
	printf("\n");
	EndOrder(root);
	printf("\n");
	/*int size = 0;
	printf("TreeSize:%d\n", TreeSize(root,&size));//方法1
	 size = 0;
	printf("TreeSize:%d\n", TreeSize(root, &size));
	 size = 0;
	printf("TreeSize:%d\n", TreeSize(root, &size));*/
	printf("TreeSize:%d\n", TreeSize(root));
	printf("TreeLeafSize:%d\n", TreeLeafSize(root));
	printf("TreeLeafHight:%d\n", TreeLeafHight(root));
	printf("TreeLeafKHight:%d\n", TreeLeafKHight(root, 4));
	return 0;
}