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
    
    Node* first = new Node;
    Node* second = new Node;
    Node* third = new Node;
    Node* fourth = new Node;
    Node* fifth = new Node;

    
    cout << "Enter 5 values: ";
    cin >> first->data;
    cin >> second->data;
    cin >> third->data;
    cin >> fourth->data;
    cin >> fifth->data;

    
    first->prev = NULL;
    first->next = second;

   
    second->prev = first;
    second->next = third;

    
    third->prev = second;
    third->next = fourth;

    
    fourth->prev = third;
    fourth->next = fifth;

    fifth->prev = fourth;
    fifth->next = NULL;

    
    cout << "Forward Traversal:" << endl;
    Node* temp = first;
    int count = 0;
    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        count++;
        temp = temp->next;
    }
    cout << "NULL" << endl;

  
    cout << "Backward Traversal:" << endl;
    temp = fifth; 
    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    }
    cout << "NULL" << endl;

 
    cout << "Total Nodes: " << count << endl;

    
    delete first;
    delete second;
    delete third;
    delete fourth;
    delete fifth;

    return 0;
}