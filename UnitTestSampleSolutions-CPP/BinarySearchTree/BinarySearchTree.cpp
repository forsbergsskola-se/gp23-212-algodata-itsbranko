#include <iostream>
#include "BST.h"

int main()
{
    BST bst;
    bst.insert(7);
    bst.insert(3);
    bst.insert(15);
    bst.insert(9);
    bst.insert(20);

    std::cout << bst.root->data << std::endl;               //7
    std::cout << bst.root->left->data << std::endl;         //3
    std::cout << bst.root->right->data << std::endl;        //15
    std::cout << bst.root->right->right->data << std::endl; //20
    std::cout << bst.root->right->left->data << std::endl;  //9
}

