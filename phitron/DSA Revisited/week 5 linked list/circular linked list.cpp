
#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int val;
    node* next;
    node(int n){
        val = n;
        next = NULL;
    }
};

void insert_at_head(node* &head, int val){
    node* new_node = new node(val);
    if(head == NULL){
        head = new_node;
        head -> next = head;
        return;
    }
    node* temp = head;
    while(temp -> next != head){
        temp = temp -> next;
    }
    temp -> next = new_node;
    new_node -> next = head;
    head = new_node;
}

// INSERT AT TAIL
void insert_at_tail(node* &head, int val){
    node* new_node = new node(val);

    if(head == NULL){
        head = new_node;
        new_node -> next = head;
        return;
    }
    node* temp = head;
    while(temp -> next != head){
        temp = temp -> next;
    }
    new_node -> next = head;
    temp -> next = new_node;
}

void insert_at_specific(node* &head, int pos, int val){
    node* new_node = new node(val);
    if(pos == 1){
        if(head == NULL){
            head = new_node;
            new_node -> next = head;
            return;
        }else{
            node* temp = head;
            while(temp -> next != head){
                temp = temp -> next;
            }
            temp -> next = new_node;
            new_node -> next = head;
            head = new_node;
            return;
        }
    }
    int count = 1;
    node* temp = head;
    while(count < pos - 1){
        temp = temp -> next;
        count++;
    }
    new_node -> next = temp -> next;
    temp -> next = new_node;


}


void print_list(node* head){
    node* temp = head;

    while(temp -> next != head){
        cout << temp -> val << " ";
        temp  = temp -> next;
    }

    cout << temp  -> val << endl;
}

void delete_at_head(node* &head){
    if(head == NULL) return;
    node* temp = head;
    while(temp -> next != head){
        temp = temp -> next;
    }
    temp -> next = head -> next;
    node* del_node = head;
    head = head -> next;
    delete del_node;
}

void delete_at_tail(node* &head){
    node* temp = head;
    while(temp -> next -> next!= head){
        temp = temp -> next;
    }
    delete temp -> next;
    temp -> next = head;

}

int main(){
    node* head = NULL;

    insert_at_tail(head,1);
    insert_at_tail(head,2);
    insert_at_tail(head,3);
    insert_at_tail(head,4);
    insert_at_tail(head,5);

    delete_at_tail(head);
    print_list(head);

}

