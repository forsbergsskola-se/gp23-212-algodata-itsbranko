#include "BST.h"

TreeNode::TreeNode(int x) : data(x), left(nullptr), right(nullptr) {} //CreateNode function

BST::BST() : root(nullptr) {}

void BST::insert(int data)
{
    root = insertHelper(root, data);
}

TreeNode* BST::insertHelper(TreeNode* node, int data)
{
    if (node == nullptr)
        {
        return new TreeNode(data);
        }
    
    if (data < node->data)
        {
        node->left = insertHelper(node->left, data);
        }
    
    else if (data > node->data)
        {
        node->right = insertHelper(node->right, data);
        }
    return node;
}