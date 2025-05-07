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


void display(node* &head);
void insert_at_head(node* &head, int val);
void insert_after_specific_value(node* head, int position_val,int new_value);
void insert_after_specific_position(node* head, int pos,int val);

int main(){
    node* head = NULL;
    //Insert at the head
    insert_at_head(head,10);
    insert_at_head(head,20);
    insert_at_head(head,30);


    display(head);
    cout << endl;
    //insert_after_specific_position(head,2,20);
    display(head);
}

//insert after a specific value
void insert_after_specific_value(node* head, int position_val,int new_value){
    node* new_node = new node(new_value);
    int count = 1;
    node* temp = head;

    while(temp != NULL){
        if(temp -> val == position_val){
            break;
        }
        temp = temp -> link;
        count++;
    }
    cout << count << endl;

    if(count == 1){
        node* new_node = new node(new_value);
        node* temp = head;
        head = new_node;
        new_node ->link = temp;
    }else{
        insert_after_specific_position(head,count,new_value);
    }

}

//Insert at head
void insert_at_head(node* &head, int val){
    node* new_node = new node(val);

    new_node ->link = head;
    head = new_node;

}

//Insert after a specific position
void insert_after_specific_position(node* head, int pos,int val){
    int count = 1;
    node* temp = head;
    while(count != pos-1){
        temp = temp -> link;
        count++;
    }
    //cout << temp -> val << endl;
    node* temp_2 = temp ->link;
    node* new_node = new node(val);
    temp -> link = new_node;
    new_node ->link = temp_2;
}

//Display Node
void display(node* &head){
    node* temp = head;

    while(temp != NULL){
        cout << temp -> val << " ";
        temp = temp -> link;
    }
}
