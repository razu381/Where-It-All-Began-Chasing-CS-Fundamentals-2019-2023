#include<bits/stdc++.h>
using namespace std;


class node{
public:
    int val;
    node* link;

    node(int val){
        this -> val = val;
        link = NULL;
    }
};

void insert_at_tail(node* &head,int val);
void display(node* head);
void reverse_list(node* &head);
node* reverse_list_rec(node* &head);

int main(){
    node* head = NULL;
    //insert at tail
    insert_at_tail(head,100);
    insert_at_tail(head,200);
    insert_at_tail(head,300);
    insert_at_tail(head,400);

    display(head);
    cout << endl;
    reverse_list_rec(head);
    display(head);
}


//Reverse a linked list Recursion
node* reverse_list_rec(node* &head){
    if(head -> link == NULL){
        return head;
    }

    node* new_head = reverse_list_rec(head -> link);
    new_head -> link = head;
    head -> link = NULL;
    return new_head -> link;
}

//Reverse a linked list
void reverse_list(node* &head){
    node* prev = NULL;
    node* next = NULL;
    node* current = head;

    while(current != NULL){
        next = current -> link;
        current -> link = prev;
        prev = current;
        current = next;
    }
    head = prev;
}



//Insert at tail

void insert_at_tail(node* &head,int val){

    node* new_node = new node(val);
    node* temp = head;

    if(head == NULL){
        head = new_node;
        return;
    }

    //why temp -> link ??????
    //cause we will just add at the tail, so tail must be temp -> link. isn't it?

    while(temp -> link != NULL){
        temp = temp -> link;
    }
    temp -> link = new_node;
}

//display

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout << temp -> val << " ";
        temp = temp -> link;
    }
}
