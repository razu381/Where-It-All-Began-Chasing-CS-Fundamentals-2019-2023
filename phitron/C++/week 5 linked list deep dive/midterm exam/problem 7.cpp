
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

node* reverse_list(node* &head,int pos){
    node* Current = head;
    node* Next = NULL;
    node* Prev = NULL;
    int count = 1;
    while(Current != NULL && count <= pos){
        Next = Current -> next;
        Current -> next = Prev;
        Prev = Current;
        Current = Next;
        count++;
    }

    if (Next != NULL)
        head->next = reverse_list(Next, pos);
    return Prev;

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
    int k;
    cin >> k;
    head = reverse_list(head,k);
    display(head);
}
