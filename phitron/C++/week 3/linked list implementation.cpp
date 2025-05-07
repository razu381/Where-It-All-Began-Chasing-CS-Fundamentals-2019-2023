#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int value;
    node* next;

    node(int val){
        value = val;
        next = NULL;
    }
};

void add_at_end(node* &head, int val){
    node* new_node = new node(val);

    if(head == NULL){
        head = new_node;
        return;
    }

    node* temp = head;
    while(temp -> next != NULL){
        temp  = temp -> next;
    }
    temp -> next = new_node;

}

void display(node* head){
    node* temp = head;

    while(temp != NULL){
        cout << temp ->value << " ";
        temp = temp -> next;
    }
    cout << "NULL \n";
}



int main(){
    node* head = NULL;

    //insert items
    int n;
    cout << "How many items you want to insert: ";
    cin >> n;
    //Take nput
    for(int i = 0; i < n; i++){
        int val;
        cout << "Enter Value " << i+1 << ": ";
        cin >> val;
        add_at_end(head,val);
    }


    //Print the list
    display(head);
}
