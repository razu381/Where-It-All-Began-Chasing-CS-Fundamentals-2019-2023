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
        cout << head -> val << " ";

        head = head -> next;
    }
    cout << endl;
}
int main(){
    node* head = NULL;

    insert_at_tail(head,6);
    insert_at_tail(head,-6);
    insert_at_tail(head,8);
    insert_at_tail(head,4);
    insert_at_tail(head,-12);
    insert_at_tail(head,9);
    insert_at_tail(head,8);
    insert_at_tail(head,-8);



    node* temp = head;
    node* prev = NULL;
    while(temp != NULL && temp -> next != NULL ){
        int counter = temp -> val;
        node* temp2 = temp -> next;

        while(temp2 -> next != NULL && counter + temp2 -> val != 0){
            counter += temp2 -> val;
            temp2 = temp2 -> next;
        }
        if(temp2 != NULL && counter + temp2 -> val != 0) counter += temp2 -> val;

        if(counter + temp2 -> val == 0){
            node* temp3 = temp2 -> next;
            if(prev == NULL) head = temp3;
            else prev -> next = temp3;
            while(temp != temp2){
                node* del_node =  temp;
                temp = temp -> next;
                delete del_node;
            }
            delete temp2;
            temp = temp3;

        }else{
            prev = temp;
            temp = temp -> next;
        }


    }
    display(head);
}
