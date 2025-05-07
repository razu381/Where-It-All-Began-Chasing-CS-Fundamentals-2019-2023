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

struct Test{
    int pos[1000];
};

int len(node* &head);
void insert_at_head(node* &head,int val);
void insert_at_tail(node* &head,int val);
void insert_at_specific(node* &head, int pos, int val);
int search_in_unique(node* &head, int val);
Test search_in_dup_return(node* &head, int value);
void delete_at_tail_1(node* &head);
node* delete_at_tail_2(node* &head);
void delete_at_specific(node* &head, int pos);
void display(node* head);


int main(){
    node* head = NULL;
    //insert at tail
    insert_at_tail(head,100);
    //insert_at_tail(head,200);
//    insert_at_tail(head,300);
//    insert_at_tail(head,400);
    //cout << len(head) << endl;
    display(head);
    cout << endl;
    delete_at_tail_2(head);
    display(head);
}
//end of main function

//delete at specific position
void delete_at_specific(node* &head, int pos){
    node* temp = head;

    int count = 1;

    while(count < pos - 1){
        temp = temp -> link;
        count++;
    }

    temp -> link = temp -> link -> link;

}

//delete at the tail of a linked list -- 1
void delete_at_tail_1(node* &head){
    node* temp = head;
    int count = 1;
    int size = len(head);

    while(count != size - 1){
        temp = temp -> link;
        count++;
    }
    delete(temp -> link);
    temp -> link = NULL;
}


//delete at the tail of a linked list --- 2
node* delete_at_tail_2(node* &head){
    node* temp = head;
    if(head == NULL){
        return NULL;
    }
    if(head -> link == NULL){
        //delete head;
        return NULL;
    }
    //find the second largest node
    while(temp -> link -> link != NULL){
        temp = temp -> link;
    }
    delete(temp -> link );
    temp -> link = NULL;
    return head;

}


//len of a linked list
int len(node* &head){
    int count = 0;
    node* temp = head;

    while(temp != NULL){
        count++;
        temp = temp -> link;
    }
    return count;
}



//search in a dupliate linked list return
Test search_in_dup_return(node* &head, int value){
    Test T;
    int k = 1;
    int count = 1;
    node* temp = head;

    while(temp != NULL){
        if(temp -> val == value){
            T.pos[k] = count;
            k++;
        }
        count++;
        temp = temp -> link;
    }
    T.pos[0] = k;
    return T;

}
//search in a unique linked list
int search_in_unique(node* &head, int val){
    int count = 1;
    node* temp = head;
    while(temp != NULL){
        if(temp -> val == val){
            return count;
        }
        count++;
        temp = temp -> link;

    }
    return -1;
}

//insert at the head
void insert_at_head(node* &head,int val){
    node* new_node = new node(val);
    //insert value
    new_node -> link = head;
    head = new_node;
}

//Insert at tail

void insert_at_tail(node* &head,int val){

    node* new_node = new node(val);
    node* temp = head;

    if(head == NULL){
        head = new_node;
        return;
    }

    //why temp -> link ??????
    //cause we will just add at the tail, so tail must be temp -> link. isn't it?

    while(temp -> link != NULL){
        temp = temp -> link;
    }
    temp -> link = new_node;
}
//Insert at a specific position

void insert_at_specific(node* &head, int pos, int val)
{
    if(pos == 1)
    {
        insert_at_head(head,val);
    }else
    {
        int count = 0;
        node* temp = head;

        while(count < pos - 2){
            temp = temp -> link;
            count++;
        }
        cout << "count = " << count << endl;
        node* new_node = new node(val);

        new_node -> link = temp -> link;
        temp -> link = new_node;

    }
}



//display

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout << temp -> val << " ";
        temp = temp -> link;
    }
}
