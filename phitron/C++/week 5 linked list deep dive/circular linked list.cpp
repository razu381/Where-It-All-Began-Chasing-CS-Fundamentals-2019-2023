
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
void insert_at_head(node* &head, int val);
void deletion_at_head(node* &head);
void deletion_at_tail(node* &head);


int main(){
    node* head = NULL;
    insert_at_tail(head,1);
    insert_at_tail(head,2);
    insert_at_tail(head,3);

    display(head); cout << endl;
    //cout << len(head);
    deletion_at_tail(head);
    display(head); cout << endl;
}

//deletion at tail of a circular linked list
void deletion_at_tail(node* &head){
    node* temp = head;
    if(temp != NULL && temp -> link != head){
        while(temp -> link -> link != head){
            temp = temp -> link;
        }
        node* del_node = temp -> link;
        temp -> link = head;
        delete del_node;
    }else{
        if(head == NULL){
            return;
        }else if(head -> link == NULL){
            deletion_at_head(head);
        }
    }
}
//deletion at head
void deletion_at_head(node* &head){
    if(head != NULL){
        node* temp = head;

        do{
            temp = temp -> link;
        }while(temp -> link != head);

        temp -> link = head -> link;
        head = head -> link;
    }else
    {
        cout << "Head is null" << endl;
    }


}
//insert at head
void insert_at_head(node* &head, int val){
    node* new_node = new node(val);
    new_node -> link = head;
    if(head == NULL){
        head = new_node;
        new_node -> link = head;
    }

    node* temp = head;
    while(temp -> link != head){
        temp = temp -> link;
    }
    temp -> link = new_node;
    head = new_node;
}

//insert at tail
void insert_at_tail(node* &head, int val){
    node* new_node = new node(val);

    if(head == NULL){
        head = new_node;
        new_node -> link = head;
        return;
    }
    node* temp = head;

    while(temp ->link != head){
        temp = temp -> link;
    }

    new_node -> link = head;
    temp -> link = new_node;

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





//display a linked list
void display(node* &head){
    node* temp = head;

    while(temp -> link != head){
        cout << temp -> value << " ";
        temp = temp -> link;
    }
    cout << temp -> value << " ";
}

//count the sum of a linked list
int len(node* &head){
    int counter = 0;
    node* temp = head;

    do{
        counter++;
        temp = temp -> link;
    }while(temp != head);

    return counter;
}

