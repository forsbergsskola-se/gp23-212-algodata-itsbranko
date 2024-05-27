#pragma once
#include <stack>

struct  Node
{
    int data;
    Node* left;
    Node* right;
};


Node* CreateNode(int value);
void Insert(int value);
Node* insertRec(Node* node, int val);

class BTS
{
public:
    Node* root = CreateNode(10);
    
};
