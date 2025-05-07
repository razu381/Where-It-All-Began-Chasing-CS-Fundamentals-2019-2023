// A complete working C++ program to
// demonstrate all insertion methods
#include <bits/stdc++.h>
using namespace std;

// A linked list node
class Node {
public:
	int val;
	Node* next;
	Node* prev;
    Node(int value){
        val = value;
        next = NULL;
        prev = NULL;
    }
};

void insert_at_head(Node* &head, int val){
    Node* new_node = new Node(val);
    new_node -> next = head;
    if(head != NULL){
        head -> prev = new_node;
    }
    head = new_node;
}

void display(Node* head){
    while(head != NULL){
        cout << head -> val << " ";
        head = head -> next;
    }
    cout << endl;
}

void reversed_display_doubly_list(Node* head){
    Node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    while(temp != NULL){
        cout << temp -> val << " ";
        temp = temp -> prev;
    }
    cout << endl;
}

int main(){
    Node* head = NULL;
    insert_at_head(head,47);
    insert_at_head(head,33);
    insert_at_head(head,25);
    insert_at_head(head,14);
    insert_at_head(head,47);
    insert_at_head(head,33);
    insert_at_head(head,25);
    insert_at_head(head,14);
    insert_at_head(head,47);
    insert_at_head(head,33);
    insert_at_head(head,25);
    insert_at_head(head,14);
    insert_at_head(head,47);
    insert_at_head(head,33);
    insert_at_head(head,25);
    insert_at_head(head,14);

    display(head);

    reversed_display_doubly_list(head);


}
