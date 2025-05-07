
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

void insert_at_tail(node* &head, int val);
void delete_node(node* &head, int pos);
void display(node* head);
int len(node* &head);

int main(){
    node* head = NULL;
    int k,m,n;
    cin >> k >> m >> n;
    for(int i = 0; i < k; i++){
        int val;
        cin >> val;
        insert_at_tail(head,val);
    }
    int length = len(head);
    int count = 0, pos = 0;
    while(count < length){
       for(int i = 0; i < m && count < length; i++){
           count++;
           pos++;
       }
       for(int i = 0;i < n && count < length; i++){
           delete_node(head,pos);
           count++;
       }
   }

   display(head);

}

node* re_del_node(node* &head,int m,int n){
    node* temp = head;
    int pos = 0;
    int count = 0;
    int length = len(head);
    while(count < length){
        for(int i = 0; i < m && count < length; i++){
            temp = temp -> next;
            pos++;
            count++;
        }
        for(int j = 0; j < n && count < length; j++){
            delete_node(head,pos);
            temp = temp -> next;
            count++;
            display(head);
        }

    }
    return head;

}




void delete_node(node* &head,int position){
    node* temp = head;

    if(temp != NULL && position <= len(head)){

        if(position == 0){
            node* del_node = head;
            head = head -> next;
            delete(del_node);
            //return head;
        }else{
            int count = 0;
            while(count < position - 1){
                temp = temp -> next;
                count++;
            }
            node* del_node = temp -> next;
            temp -> next = del_node -> next;
            delete(del_node);
            //return llist;
        }


    }else{
        if(head == NULL){
            cout << "NULL" << endl;
        }else{
            cout<< position << "Position is greater than number of linked list" << endl;
        }
    }
}

int len(node* &head){
    node* temp = head;
    int count = 0;
    while(temp != NULL){
        temp = temp -> next;
        count++;
    }
    return count;
}

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
