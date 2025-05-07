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


void insert_at_tail(node*& head, int val){
    node* n = new node(val);

    if(head == NULL){
        head = n;
        return;
    }

    node* temp = head;

    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = n;
}

void display(node* head){
    node* temp = head;

    while(temp != NULL){
        cout << temp ->value << " ";
        temp = temp -> next;
    }
    cout << "NULL \n";
}


void dispaly(node* head){
    node* temp = head;

    while(temp != NULL){
        cout << temp -> value << " ";
        temp = temp ->next;
    }
    cout << "NULL \n";
}

int main(){
    node* head = NULL;
    insert_at_tail(head,5);
    insert_at_tail(head,7);

    display(head);

}
