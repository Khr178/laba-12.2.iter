#include <iostream>
using namespace std;

struct Node 
{
    int data;
    Node* next;
};

Node* createNode(int value) 
{
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void insertNode(Node*& head, int value) 
{
    if (head == NULL) 
    {
        head = createNode(value);
    }
    else 
    {
        Node* current = head;
        while (current->next != NULL) 
        {
            current = current->next;
        }
        current->next = createNode(value);
    }
}

void printList(Node* head) 
{
    Node* current = head;
    while (current != NULL) 
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

void deleteNode(Node*& head, int value) 
{
    Node* current = head;
    Node* prev = NULL;
    while (current != NULL) 
    {
        if (current->data == value) 
        {
            if (prev == NULL) 
            {
                head = current->next;
            }
            else 
            {
                prev->next = current->next;
            }
            delete current;
            return;
        }
        prev = current;
        current = current->next;
    }
}

int main() 
{
    Node* myList = NULL;
    insertNode(myList, 5);
    insertNode(myList, 2);
    insertNode(myList, 8);
    insertNode(myList, 3);
    cout << "Original List: ";
    printList(myList);
    deleteNode(myList, 8);
    cout << "List after deleting 8: ";
    printList(myList);
    deleteNode(myList, 5);
    cout << "List after deleting 5: ";
    printList(myList);
    return 0;
}