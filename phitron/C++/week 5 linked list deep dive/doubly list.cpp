#include<bits/stdc++.h>
using namespace std;


class doublyNode{
public:
    int val;
    doublyNode* prev;
    doublyNode* next;

    doublyNode(int val){
        this -> val = val;
        prev = NULL;
        next = NULL;
    }
};

void doubly_insert_at_tail(doublyNode* &head, int val);
void display(doublyNode* &head);
void insert_at_head(doublyNode* &head, int val);
void print_rev(doublyNode* &head);

int main(){
    doublyNode* head = NULL;

    doubly_insert_at_tail(head,12);
    doubly_insert_at_tail(head,22);
    doubly_insert_at_tail(head,32);
    insert_at_head(head,6);
    insert_at_head(head,8);
    insert_at_head(head,10);

    display(head);
    cout << endl;
    print_rev(head);
}

//Reverse print a linked list
void print_rev(doublyNode* &head){
    doublyNode* temp = head;
    while(temp -> next!= NULL){
        temp = temp -> next;
    }f
    while(temp != NULL){
        cout << temp -> val << " ";
        temp = temp -> prev;
    }
}
//insert at head
void insert_at_head(doublyNode* &head, int val){

    doublyNode* new_node = new doublyNode(val);
    head -> prev = new_node;
    new_node -> next = head;
    head = new_node;
}
//insert at tail
void doubly_insert_at_tail(doublyNode* &head, int val){
    doublyNode* new_node = new doublyNode(val);

    if(head == NULL){
        head = new_node;
        return;
    }
    doublyNode* temp = head;

    while(temp ->next != NULL){
        temp = temp -> next;
    }
    temp -> next = new_node;
    new_node -> prev = temp;
}


//display a linked list
void display(doublyNode* &head){
    doublyNode* temp = head;

    while(temp != NULL){
        cout << temp -> val << " ";
        temp = temp -> next;
    }
    cout << "Null";
}
