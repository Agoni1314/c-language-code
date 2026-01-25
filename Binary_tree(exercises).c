#define  _CRT_SECURE_NO_WARNINGS
//单值二叉树
bool isUnivalTree(struct TreeNode* root)
{

    if (root == NULL)
        return true;
    if (root->left && root->left->val != root->val)
        return false;
    if (root->right && root->right->val != root->val)
        return false;
    return isUnivalTree(root->left) && isUnivalTree(root->right);
}
//相同的树
bool isSameTree(struct TreeNode* p, struct TreeNode* q)
{
    if (p == NULL && q == NULL)
        return true;
    if (p == NULL || q == NULL)
        return false;
    if (p->val != q->val)
        return false;
    return    isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}
//二叉树的前序遍历
int TreeSize(struct TreeNode* root)
{
    return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
}
void preOrder(struct TreeNode* root, int* a, int* pi)
{
    if (root == NULL)
        return;
    a[(*pi)++] = root->val;
    preOrder(root->left, a, pi);
    preOrder(root->right, a, pi);
}
int* preorderTraversal(struct TreeNode* root, int* returnSize)
{
    *returnSize = TreeSize(root);
    int* a = (int*)malloc(sizeof(int) * (*returnSize));
    int i = 0;
    preOrder(root, a, &i);
    return a;
}
//另一颗数的子树
bool isSameTree(struct  TreeNode* p, struct  TreeNode* q)
{
    if (p == NULL && q == NULL)
        return true;
    if (p == NULL || q == NULL)
        return false;
    if (p->val != q->val)
        return false;
    return    isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}
bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot)
{
    if (root == NULL)
        return false;
    if (root->val == subRoot->val && isSameTree(root, subRoot))
        return true;
    return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
}

