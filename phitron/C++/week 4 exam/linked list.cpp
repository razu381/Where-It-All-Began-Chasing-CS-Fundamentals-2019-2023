#include<bits/stdc++.h>
using namespace std;


struct node{
public:
    int val;
    node* next;

    node(int value){
        val = value;
        next = NULL;

    }
};

void insert_at_tail(node*& head, int val);
void insert_at_head(node*& head,int val);
void reversedListPrint(node*& head);
void display(node* head);

int main(){
    node* head = NULL;
    //insert at tail
    insert_at_tail(head,10);
    insert_at_tail(head,20);
    insert_at_tail(head,50);

    //insert at head
    insert_at_head(head,2);
    insert_at_head(head,1);

    cout << "Original linked list: ";
    display(head);
    cout << endl;
    reversedListPrint(head);
    cout << "Reversed linked list: ";
    display(head);
}

//insert at head
void insert_at_head(node*& head,int val){
    node* new_node = new node(val);

    node* temp = head;
    head  = new_node;
    new_node -> next = temp;
}

//insert at tail
void insert_at_tail(node*& head, int val){
    node* new_node  = new node(val);

    if(head == NULL){
        head = new_node;
        return;
    }

    node* temp = head;

    while(temp -> next != NULL){
        temp = temp -> next;
    }

    temp -> next = new_node;
}

//Display node

void display(node* head){
    node* temp = head;

    while(temp != NULL){
        cout << temp -> val << " ";
        temp = temp -> next;
    }
}


//void resverse linked list


void reversedListPrint(node*& head){
    node* prev = NULL;
    node* next = NULL;
    node* current = head;

    while(current != NULL){
        next = current -> next;
        current -> next = prev;

        prev = current;
        current = next;
    }
    head = prev;
}
