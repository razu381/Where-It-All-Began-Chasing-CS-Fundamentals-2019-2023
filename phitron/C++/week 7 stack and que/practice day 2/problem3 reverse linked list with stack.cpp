#include<bits/stdc++.h>
#include "stack.h"
using namespace std;

class node{
public:
    int val;
    node* next;
    node(int value){
        val = value;
        next = NULL;
    }
};

void insert_at_tail(node* &head, int val){
    node* new_node = new node(val);
    if(head == NULL){
        head = new_node;
        return;
    }
    node* temp = head;

    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = new_node;

    //cout << "Node added = " << new_node -> val << endl;
}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout << temp -> val << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){
    node* head = NULL;
    insert_at_tail(head,5);
    insert_at_tail(head,50);
    insert_at_tail(head,880);
    insert_at_tail(head,990);
    cout << "Before: ";
    display(head);
    cout << endl;

    Stack <node*> st;
    node* temp = head;
    while(temp -> next != NULL){
        st.Push(temp);
        temp = temp -> next;
    }
    head = temp;

    node* temp2 = head;
    while(!st.Empty()){
        temp2 -> next = st.Pop();
        temp2 = temp2 -> next;
    }
    temp2 -> next = NULL;

    cout << "after pushing to the stack: ";
    display(head);

//    while(!st.Empty()){
//        node* add = st.Pop();
//        cout << add -> val<< " ";
//    }
}
