#include <iostream>
#include "BST.h"

int main()
{
    BST bst;
    bst.Insert(7);
    bst.Insert(3);
    bst.Insert(15);
    bst.Insert(9);
    bst.Insert(20);
    bst.Insert(7);
    bst.Insert(10);
    bst.Insert(18);

    bst.PrintTreeInorder(bst.root);     //Inorder search and print      EXPECT 3,7,7,9,10,15,18,20

    std::cout << "\n";
    
    bst.Search(9);      //True
    bst.Search(18);     //True
    bst.Search(1);      //False

    bst.Delete(10);     //True
    bst.Delete(2);     //False
    
    

    //std::cout << bst.root->data << std::endl;                       //7
    //std::cout << bst.root->left->data << std::endl;                 //3
    //std::cout << bst.root->right->data << std::endl;                //15
    //std::cout << bst.root->right->left->data << std::endl;          //9
    //std::cout << bst.root->right->right->data << std::endl;         //20
    //std::cout << bst.root->left->right->data << std::endl;          //7
    //std::cout << bst.root->right->left->right->data << std::endl;   //10
    //std::cout << bst.root->right->right->left->data << std::endl;   //18

    bst.PrintTreeInorder(bst.root);     //Inorder search and print after deleting       EXPECT 3,7,7,9,15,18,20
}

