
#include <iostream>
#include <string>
using namespace std;

struct  Node
{
    int data;
    Node* left;
    Node* right;
};

void PrintTreePreorder(Node* root)          //recursive function --- Preorder
{
    if(root==nullptr) return;               //checks if node is null and it returns to previous node

    cout << root->data << ", ";             //prints the data from the node
    PrintTreePreorder(root->left);          //does the function for the left node
    PrintTreePreorder(root->right);         //does the function for the right node 
}

void PrintTreeInorder(Node* root)   //Inorder
{
    if (root == nullptr) return;

    PrintTreeInorder(root->left);
    cout << root->data << ", ";
    PrintTreeInorder(root->right);
}

void PrintTreePostorder(Node* root) //Postorder
{
    if (root == nullptr) return;

    PrintTreePostorder(root->left);
    PrintTreePostorder(root->right);
    cout << root->data << ", ";
}
void Insert(int insertValue)
{
    
}

Node* CreateNode(int data)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

int main()
{
    Node* root = CreateNode(1);
    
    //root->left = CreateNode(2);
    //root->right = CreateNode(3);

    //root->left->left = CreateNode(4);
    //root->left->right = CreateNode(5);
    //root->right->left = CreateNode(6);
    //root->right->right = CreateNode(7);

    //root->left->right->left = CreateNode(9);
    //root->right->right->left = CreateNode(15);

    cout << "Preorder Algorithm:" << endl;
    PrintTreePreorder(root); 
    cout << "\nInorder Algorithm:" << endl;
    PrintTreeInorder(root);
    cout << "\nPostorder Algorithm:" << endl;
    PrintTreePostorder(root);
    
}
