#include "BTS.h"

Node* CreateNode(int value)
{
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

void Insert(int value)
{
    BTS::root = 
}
