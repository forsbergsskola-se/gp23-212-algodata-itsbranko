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
void insertAtTheEnde(Node** headAddress, int newValue)
{
    Node* newNode = new Node();
    newNode->value = newValue;
    newNode->next = nullptr;

    if (*headAddress == nullptr)
        *headAddress = newNode;

    Node* last = *headAddress;
    while (last->next != nullptr)
    {
        last = last->next;
    }
    last->next = newNode;
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
    printList(head);
}
