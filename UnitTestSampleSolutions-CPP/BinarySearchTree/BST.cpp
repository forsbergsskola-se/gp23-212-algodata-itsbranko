#include "BST.h"

#include <iostream>

TreeNode::TreeNode(int x) //CreateNode function
{
    data = x;
    left = nullptr;
    right = nullptr;
}

BST::BST()
{
    root = nullptr;
}

void BST::Insert(int data)
{
    root = InsertHelper(root, data);                                    //Using the helper function to Insert the data and make a new node
}

bool BST::Search(int data)
{
    return SearchHelper(root, data) != nullptr;                         //Goes through the whole tree and searches for the first node with the data we put in and returns it here to check if that node isnt null (0 or 1);
}

bool BST::Delete(int data)
{
    if (Search(data))
    {
        root = DeleteHelper(root, data);
        std::cout << "Node found and deleted with data: " << data << std::endl;
        return true;
    }
    return false;
}

void BST::PrintTreeInorder(TreeNode* root)   //Inorder
{
    if (root == nullptr) return;

    PrintTreeInorder(root->left);
    std::cout << root->data << ", ";
    PrintTreeInorder(root->right);
}

TreeNode* BST::SearchHelper(TreeNode* node, int data)
{
    if (node == nullptr)
    {
        std::cout << "Sorry! Node NOT found with data: " << data << std::endl;
        return node;
    }
    if (node->data == data)
        {
        std::cout << "Node found with data: " << data << std::endl;
        return node;
        }
    if (data < node->data)
        {
            return SearchHelper(node->left, data);
        }
    return SearchHelper(node->right, data);

    //if (data < node->data)                             
    //{                                               
    //    node->left = SearchHelper(node->left, data);    
    //}                                               
    //else if (data > node->data)
    //{
    //    node->right = SearchHelper(node->right, data);  
    //}
    //return node;
}

TreeNode* BST::DeleteHelper(TreeNode* node, int data)
{
    if (node == nullptr)
        {
        return node;
        }
    
    if (data < node->data)
        {
        node->left = DeleteHelper(node->left, data);
        }
    
    else if (data > node->data)
        {
        node->right = DeleteHelper(node->right, data);
        }
    
    else
        {
        if (node->left == nullptr)
            {
            TreeNode* temp = node->right;
            delete node;
            return temp;
            }
        else if (node->right == nullptr)
            {
            TreeNode* temp = node->left;
            delete node;
            return temp;
            }
        else
            {
            TreeNode* temp = findSmallestInTheSubtree(node->right);                      // Node with two children getting the smallest of the right subtree
            node->data = temp->data;
            node->right = DeleteHelper(node->right, temp->data);
            }
        }
    return node;
}
TreeNode* BST::findSmallestInTheSubtree(TreeNode* node)                 //Finding the smallest number in the subtree because we are gonna need it for deleting nodes with 2 children!!
{
    while (node->left != nullptr) {
        node = node->left;
    }
    return node;
}

TreeNode* BST::InsertHelper(TreeNode* node, int data)                   //HELPER FUNCTION
{
    if (node == nullptr)
        {
        return new TreeNode(data);                                      //NULL new node adding with the data we passed in as a parameter in Insert
        }
    
    if (data <= node->data)                                             //checking if the value is less or equal than a value of the node...   
        {                                                               //if yes, the nodes left node becomes that node by going through the loop again and...
        node->left = InsertHelper(node->left, data);                    //seeing that the left node is null so it assigns a new node to that position...
        }                                                               //with the data we put as an Insert parameter
    
    else if (data > node->data)
        {
        node->right = InsertHelper(node->right, data);                  //SAME GOES FOR THIS ONE TOO!!!
        }
    return node;
}
