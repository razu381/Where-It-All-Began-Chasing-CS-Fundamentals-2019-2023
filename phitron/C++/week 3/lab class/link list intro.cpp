#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int value;
    node* next;

    node(int val){
        value = val;
        next = NULL;
    }
};

void insert_at_tail(node* &head, int val){
    node *new_node = new node(val);

    if(head == NULL){
        head = new_node;
        return;
    }
    node* temp = head;
    while(temp -> next != NULL){
        temp =temp -> next;
    }
    temp -> next = new_node;

}

// function to print the singly linked list
void print(node*& head)
{
    node* temp = head;

    while (temp != NULL) {
        cout << temp-> value << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}


int main(){

    node* head;
    head = NULL;

    char choice = 'Y';
    while(choice == 'Y'){
        int n;
        cout << "Enter the value: ";
        cin >> n;
        insert_at_tail(head,n);
        cout << "do you want to contitnue: , Y/N: ";
        cin >> choice;
    }


    print(head);




}
