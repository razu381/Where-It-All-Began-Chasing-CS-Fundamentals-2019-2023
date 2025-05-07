
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
void create_cycle(node* &head, int pos);
bool detect_cycle(node* &head);
void detect_remove(node* &head);
void removeCycle(node* head);

int main(){
    node* head = NULL;
    insert_at_tail(head,1);
    insert_at_tail(head,2);
    insert_at_tail(head,3);
    insert_at_tail(head,4);
    insert_at_tail(head,5);
    insert_at_tail(head,6);
    insert_at_tail(head,7);

    display(head); cout << endl;
    create_cycle(head,1);

    removeCycle(head);
    display(head);
}

//remove cycle apna college
void removeCycle(node* head){
    node* hare=head ;
    node* tortoise=head ;
    do{
        hare=hare->link->link ;
        tortoise=tortoise->link ;
    }while(hare!=tortoise) ;
    if(hare==head){
        while(tortoise->link!=head)
        tortoise=tortoise->link ;
        tortoise->link=NULL ;
        return ;
    }
    hare=head ;
    while(hare->link!=tortoise->link){
        hare=hare->link ;
        tortoise=tortoise->link ;
    }
    tortoise->link=NULL ;
}

//Detect and Remove a cycle
void detect_remove(node* &head){
    node* slow = head;
    node* fast = head;

    do{
        slow = slow -> link;
        fast = fast -> link -> link;
    }while(slow != fast);

    fast = head;
    while(fast -> link != slow -> link){
        fast = fast -> link;
        slow = slow -> link;
    }
    slow -> link = NULL;
}

//Detect a cycle
bool detect_cycle(node* &head){
    node* slow = head;
    node* fast = head;

    while(fast != NULL && fast -> link != NULL){

        fast = fast -> link -> link;
        slow = slow -> link;

        if(fast  == slow){
            return true;
        }

    }
    return false;
}

//create a cycle

void create_cycle(node* &head, int pos){
    node* temp = head;
    node* loop;
    int count = 1;
    while(temp -> link != NULL){
        if(count == pos){
            loop = temp;
        }
        count++;
        temp = temp -> link;
    }
    temp -> link= loop;
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
