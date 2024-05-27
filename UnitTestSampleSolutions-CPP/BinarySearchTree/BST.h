#pragma once
#include <stack>

struct TreeNode
{
    TreeNode(int x);

    int data;
    TreeNode* left;
    TreeNode* right;
};

class BST
{
public:
    TreeNode* root;
    
    BST();
    void insert(int data);

private:
    TreeNode* insertHelper(TreeNode* node, int data);
};

