#include <iostream>
#include "BST.h"

int main()
{
    BST bst;
    bst.Insert(7);
    bst.Insert(3);
    bst.Insert(15);
    bst.Insert(8);
    bst.Insert(9);
    bst.Insert(20);
    bst.Insert(7);
    bst.Insert(10);
    bst.Insert(18);

    std::cout << bst.root->data << std::endl;                       //7
    std::cout << bst.root->left->data << std::endl;                 //3
    std::cout << bst.root->right->data << std::endl;                //15
    std::cout << bst.root->right->left->data << std::endl;          //8
    std::cout << bst.root->right->right->data << std::endl;         //20
    std::cout << bst.root->left->right->data << std::endl;          //7
    std::cout << bst.root->right->left->right->data << std::endl;   //10
    std::cout << bst.root->right->right->left->data << std::endl;   //18
    
    bst.PrintTreeInorder(bst.root);     //Inorder search and print      EXPECT 3,7,7,8,9,10,15,18,20

    std::cout << "\n";
    
    bst.Search(8);      //True
    bst.Search(18);     //True
    bst.Search(1);      //False

    bst.Delete(8);      //True
    bst.Delete(7);      //True          //HOW DO DELETE THE NODE WITH TE SAME VALUE AS ROOT?!?!?
    bst.Delete(20);     //True
    bst.Delete(2);      //False
    
    std::cout << bst.root->data << std::endl;                       //9
    std::cout << bst.root->left->data << std::endl;                 //3
    std::cout << bst.root->right->data << std::endl;                //15
    std::cout << bst.root->right->right->data << std::endl;         //18
    std::cout << bst.root->left->right->data << std::endl;          //7
    std::cout << bst.root->right->left->data << std::endl;          //10


    bst.PrintTreeInorder(bst.root);     //Inorder search and print after deleting       EXPECT 3,7,9,10,15,18

    std::cout << "\n";

    
//=============================================ANOTHER TREE=============================================================
    BST copyTree = bst;

    copyTree.Insert(13);
    copyTree.Insert(2);
    copyTree.Insert(5);

    copyTree.PrintTreeInorder(copyTree.root);       //EXPECT 2,3,5,7,9,10,13,15,18

    std::cout << "\n";
    
    copyTree.Search(7);
    
    std::cout << copyTree.root->data << std::endl;                          //9
    
    std::cout << copyTree.root->left->data << std::endl;                    //3
    std::cout << copyTree.root->left->left->data << std::endl;              //2
    std::cout << copyTree.root->left->right->data << std::endl;             //7
    std::cout << copyTree.root->left->right->left->data << std::endl;       //5
    
    std::cout << copyTree.root->right->data << std::endl;                   //15
    std::cout << copyTree.root->right->left->data << std::endl;             //10
    std::cout << copyTree.root->right->left->right->data << std::endl;      //13
    std::cout << copyTree.root->right->right->data << std::endl;            //18

    copyTree.Clone();
    
    copyTree.PrintTreeInorder(copyTree.Clone()->root);

    copyTree.DeleteTree();

    copyTree.Clone()->Delete(2);
    copyTree.Clone()->Delete(3);
    copyTree.Clone()->Delete(5);
    copyTree.Clone()->DeleteTree();

    //EXPECTED DELETION --- 2,5,7,3,13,10,18,15,9
                                                                //WHY?!  --- Ohh i got it... === Because of the smallest one in the right sub tree becomes the root!! OKAAY! 
    //ACTUAL DELETION --- 9,10,13,15,18,3,5,7,2     
    
}

/*

              9
           /     \
          3      15
        /  \    /   \
       2   7   10    18
          /     \
         5      13
         
*/