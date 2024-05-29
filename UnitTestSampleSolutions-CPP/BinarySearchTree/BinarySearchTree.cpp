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
    bst.Delete(7);      //True          //HOW TO DELETE THE NODE WITH TE SAME VALUE AS ROOT?!?!?
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
    std::cout << "\n";
    

    std::vector<int> inOrder = copyTree.InOrder();
    for (auto data : inOrder)
    {
        std::cout << data << ", ";                               //EXPECT    2,3,5,7,9,10,13,15,18
    }
    
    std::cout << "\n";

    std::vector<int> reverseOrder = copyTree.ReverseOrder();
    for (auto data : reverseOrder)
    {
        std::cout << data << ", ";                               //EXPECT    18,15,13,10,9,7,3,2
    }

    std::cout << "\n";
    
    copyTree.DeleteTree();

    //EXPECTED DELETION --- 2,5,7,3,13,10,18,15,9
                                                                //WHY?!  --- Ohh i got it... === Because of the smallest one in the right sub tree becomes the root!! OKAAY! 
    //ACTUAL DELETION --- 9,10,13,15,18,3,5,7,2     

    
    copyTree.Clone()->Delete(2);                        
    copyTree.Clone()->Delete(3);                            //NOT FINDING THESE AFTER DELETING... WHY? Is it because they are clones? +++ Soo every time i use the Clone function its a new tree of the tree we just cloned from
    copyTree.Clone()->Delete(5);

    std::vector<int> inOrders = copyTree.Clone()->InOrder();
    for (auto data : inOrder)
    {                                                           //THIS IS WEIRD ... It prints out the clone in order but will NOT delete it?!
        std::cout << data << " ";
    }
    
    std::cout << copyTree.Clone()->root->data;                  //Also the roots data is null and well as the left and right node of it...?!?!??!

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