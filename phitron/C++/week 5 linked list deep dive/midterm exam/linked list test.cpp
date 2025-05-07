#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

void print_singly_linked_list(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

void insert_at_tail(SinglyLinkedListNode* &head, int val){
    SinglyLinkedListNode* new_node = new SinglyLinkedListNode(val);

    if(head == NULL){
        head = new_node;
        return;
    }
    SinglyLinkedListNode* temp = head;

    while(temp ->next != NULL){
        temp = temp -> next;
    }
    temp -> next = new_node;
}


SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode* new_node = new SinglyLinkedListNode(data);
    if(llist == NULL && position == 0){
        llist = new_node;
        return llist;
    }
    int count = 0;
    SinglyLinkedListNode* temp = llist;
    while(count < position - 1 && temp != NULL){
        temp = temp -> next;
        count++;
    }
    new_node -> next = temp -> next;
    temp -> next = new_node;
    return llist;
}

int main(){
    SinglyLinkedListNode* head = NULL;
    insert_at_tail(head,10);
    insert_at_tail(head,20);
    insert_at_tail(head,30);
    insert_at_tail(head,40);
    insert_at_tail(head,50);



    print_singly_linked_list(head); cout << endl;
    head = insertNodeAtPosition(head,50,2);
    print_singly_linked_list(head);
}



