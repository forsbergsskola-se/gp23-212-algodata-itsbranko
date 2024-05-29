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
    void Insert(int data);
    bool Search(int data);
    bool Delete(int data);
    void DeleteTree();
    void PrintTreeInorder(TreeNode* root);
    BST* Clone();

private:
    TreeNode* InsertHelper(TreeNode* node, int data);
    TreeNode* SearchHelper(TreeNode* node, int data);
    TreeNode* DeleteHelper(TreeNode* node, int data);
    TreeNode* findSmallestInTheSubtree(TreeNode* node);
    TreeNode* CloneHelper(TreeNode* node);
};

