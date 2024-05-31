#pragma once
#include <vector>

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
    void PrintTreeReverseOrder(TreeNode* root);

    BST* Clone();
    
    //std::vector<int> ReverseOrder();
    //std::vector<int> InOrder();

private:
    TreeNode* InsertHelper(TreeNode* node, int data);
    TreeNode* SearchHelper(TreeNode* node, int data);
    TreeNode* DeleteHelper(TreeNode* node, int data);
    TreeNode* findSmallestInTheSubtree(TreeNode* node);
    
    TreeNode* CloneHelper(TreeNode* node);
    
    //void InOrderHelper(TreeNode* node, std::vector<int>& vec);
    //void ReverseOrderHelper(TreeNode* node, std::vector<int>& vec);
};

