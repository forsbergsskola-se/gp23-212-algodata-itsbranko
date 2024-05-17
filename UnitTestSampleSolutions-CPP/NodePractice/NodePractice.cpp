#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node* next;
};

void printList(Node* node)
{
    while (node!= nullptr)
    {
        cout << node->value << endl;
        node = node->next;
    }
}

void insertAtTheFront(Node** headAddress, int newValue)
{
    Node* newNode = new Node();
    newNode->value = newValue;

    newNode->next = *headAddress;

    *headAddress = newNode;
}

void insertAtTheEnd(Node** headAddress, int newValue)
{
    //prepare the new node
    Node* newNode = new Node();
    newNode->value = newValue;
    newNode->next = nullptr;

    //if linked list is empty set newNode as head
    if (*headAddress == nullptr)
        *headAddress = newNode;

    //find the last node in linked list
    Node* last = *headAddress;
    while (last->next != nullptr)
    {
        last = last->next;
    }

    //insert at the end and set the newNode as the last node
    last->next = newNode;
}

void insertAfter(Node* previous, int newValue)
{
    //check if previous node is NULL
    if (previous == nullptr)
        cout << "Previous can NOT be NULL!" << endl;

    //prepare new node
    Node* newNode = new Node();
    newNode->value = newValue;

    //insert newNode after previous
    newNode->next = previous->next;
    previous->next = newNode;
}

int main()
{
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->value = 1;
    head->next = second;

    second->value = 2;
    second->next = third;

    third->value = 3;
    third->next = nullptr;

    insertAtTheFront(&head, -1);
    insertAtTheFront(&head, -2);

    insertAfter(head, 222);
    
    insertAtTheEnd(&head, 4);
    insertAtTheEnd(&head, 5);
    printList(head);
}
