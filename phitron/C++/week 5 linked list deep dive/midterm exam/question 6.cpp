#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int val;
    node* next;

    node(int val){
        this -> val = val;
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
}

void display(node* head){
    while(head != NULL){
        cout << head -> val;
        if(head -> next != NULL){
            cout << " -> ";
        }
        head = head -> next;
    }
    cout << endl;
}
void replace_even(node* &head){
    node* temp = head;
    while(temp != NULL){
        if(temp -> val % 2 == 0){
            temp -> val = -1;
        }
        temp = temp -> next;
    }
}

int main(){
    node* head = NULL;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        insert_at_tail(head,val);
    }
    replace_even(head);
    display(head);
}
