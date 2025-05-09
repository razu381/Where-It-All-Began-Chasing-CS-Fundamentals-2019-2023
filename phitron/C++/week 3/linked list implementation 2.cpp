#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int value)
    {
        data = value;
        next = NULL;
    }
};





void insertattail(node*& head, int val)
{
    node* n = new node(val);
    if (head == NULL) {
        head = n;
        return;
    }

    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
}





void print(node*& head)
{
    node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}




int main()
{
    node* head = NULL;

    insertattail(head, 4);
    insertattail(head, 5);
    cout << "After insertion at tail: ";
    print(head);
    cout << endl;

    return 0;
}
