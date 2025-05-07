#include<bits/stdc++.h>
using namespace std;

struct node{
    int value;
    node* link;

    node(int val){
        value = val;
        link = NULL;
    }
};

void insert_at_tail(node* &head, int val);
void insert_at_specific(node* &head, int pos, int val);
void display(node* &head);
int len(node* &head);
int find_mid(node* &head);


int main(){
    node* head = NULL;
    insert_at_tail(head,1);
    insert_at_tail(head,2);
    insert_at_tail(head,4);
    insert_at_tail(head,5);
    insert_at_specific(head,3,3);

    display(head);
    cout << endl;
    int res = find_mid(head);
    cout << res;
}



//Find mid of a linked list
int find_mid(node* &head){
    if(head == NULL){
        return -1;
    }
    node* slow = head;
    node* fast = head;

    while(fast -> link -> link != NULL){
        fast = fast -> link -> link;
        slow = slow -> link;
    }
    return slow -> value;
}




//insert at tail
void insert_at_tail(node* &head, int val){
    node* new_node = new node(val);

    if(head == NULL){
        head = new_node;
        return;
    }
    node* temp = head;

    while(temp ->link != NULL){
        temp = temp -> link;
    }
    temp -> link = new_node;
}

//insert at specific positon
void insert_at_specific(node* &head, int pos, int val){
    int i = 1;
    node* temp = head;
    while(i < pos - 1){
        temp = temp -> link;
        i++;

    }
    node* new_node = new node(val);
    new_node -> link = temp -> link;
    temp -> link = new_node;
}
//display a linked list
void display(node* &head){
    node* temp = head;

    while(temp != NULL){
        cout << temp -> value << " ";
        temp = temp -> link;
    }
    cout << "Null";
}

//count the sum of a linked list
int len(node* &head){
    int counter = 0;
    node* temp = head;

    while(temp != NULL){
        counter++;
        temp = temp -> link;
    }
    return counter;
}
