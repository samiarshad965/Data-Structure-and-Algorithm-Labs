#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* prev;
    Node* next;
};
int main()
{
    Node* head = new Node;
    Node* second = new Node;
    Node* third = new Node;

    head->data = 10;
    second->data = 20;
    third->data = 30;

    head->prev = NULL;
    head->next = second;

    second->prev = head;
    second->next = third;

    third->prev = second;
    third->next = NULL;

    // Insert at beginning
    Node* newNode = new Node;

    cout << "Enter value: ";
    cin >> newNode->data;

    newNode->prev = NULL;
    newNode->next = head;

    head->prev = newNode;
    head = newNode;

    // Display list
    Node* temp = head;
    cout << "Updated List: ";

    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL";
    return 0;
}
