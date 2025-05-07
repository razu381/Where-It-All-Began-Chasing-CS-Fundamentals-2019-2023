#include<bits/stdc++.h>
using namespace std;


struct Test{
    int position[1000];
};

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
int search_list(node* &head, int val);
void search_duplicate_list(node* &head, int val);
Test search_duplicate_list_return(node* &head,int val);

int main(){
    node* head = NULL;
    insert_at_tail(head,40);
    insert_at_tail(head,30);
    insert_at_tail(head,20);
    insert_at_tail(head,10);

    display(head); cout << endl;
    insert_at_specific(head,3,50);
    display(head);

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


//search in a uniqe linked list

int search_list(node* &head, int val){
    node* temp = head;
    int pos = 1;

    while(temp != NULL){
        if(temp -> value == val){
            return pos;
        }
        pos++;
        temp = temp -> link;
    }
    return -1;
}

//Length of a linked list

int len(node* &head){
    int counter = 0;
    node* temp = head;

    while(temp != NULL){
        counter++;
        temp = temp -> link;
    }
    return counter;
}


//search in a duplicate linked list

void search_duplicate_list(node* &head, int val){
    node* temp = head;
    int size = len(head);
    int pos[size+1], k = 1;
    int count = 1;
    int is_found = 0;

    while(temp != NULL){
        if(temp -> value == val){
            pos[k] = count;
            k++;
            is_found = 1;
        }
        temp = temp -> link;
        count++;
    }
    if(is_found == 0){
        cout << "Value was not found";

    }else{
        pos[0] = k;

        for(int i = 1; i < pos[0]; i++){
            cout << pos[i] << " " ;
        }
    }

}


Test search_duplicate_list_return(node* &head, int val){
    node* temp = head;
    int k = 1;
    Test T;
    int count = 1;

    while(temp != NULL){
        if(temp -> value == val){
            T.position[k] = count;
            k++;
        }
        temp = temp -> link;
        count++;
    }
    T.position[0] = k;
    return T;

}
