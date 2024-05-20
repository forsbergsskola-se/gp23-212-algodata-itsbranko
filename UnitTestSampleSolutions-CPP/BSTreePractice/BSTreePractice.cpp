
#include <string>
using namespace std;

struct  Node
{
    int data;
    Node* left;
    Node* right;
};

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
    
    root->left = CreateNode(2);
    root->right = CreateNode(3);

    root->left->left = CreateNode(4);
    root->left->right = CreateNode(5);
    root->right->left = CreateNode(6);
    root->right->right = CreateNode(7);

    root->left->right->left = CreateNode(9);
    root->right->right->left = CreateNode(15);
    
}
