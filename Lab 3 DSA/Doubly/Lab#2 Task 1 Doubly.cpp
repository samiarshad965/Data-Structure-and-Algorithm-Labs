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
    Node* fourth = new Node;
    Node* fifth = new Node;

    cout << "Enter five values: ";
    cin >> head->data;
    cin >> second->data;
    cin >> third->data;
    cin >> fourth->data;
    cin >> fifth->data;

    // Connect node
    head->prev = NULL;
    head->next = second;

    second->prev = head;
    second->next = third;

    third->prev = second;
    third->next = fourth;

    fourth->prev = third;
    fourth->next = fifth;

    fifth->prev = fourth;
    fifth->next = NULL;

    // Forward Traversal
    cout << "Forward Traversal: "<<endl;
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    // Backward Traversal
    cout << "Backward Traversal: "<<endl;
    temp = fifth;
    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    }

    cout << "NULL" << endl;
    // Count Nodes
    int count = 0;
    temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    cout << "Total Nodes: " << count << endl;

    delete head;
    delete second;
    delete third;
    delete fourth;
    delete fifth;

    return 0;
}
