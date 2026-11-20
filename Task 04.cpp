#include <iostream>
using namespace std;


struct Node
{
    int data;
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

 
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL; 
    cout << "Linked List: ";
    Node* temp = first;
    int count = 0;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        count++;
        temp = temp->next;
    }
    cout << "NULL" << endl;

    
    cout << "Total nodes: " << count << endl;

    
    delete first;
    delete second;
    delete third;
    delete fourth;
    delete fifth;

    return 0;
}