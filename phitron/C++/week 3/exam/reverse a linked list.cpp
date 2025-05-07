#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int value;
    node* link;

    node(int val){
        value = val;
        link = NULL;
    }
};

int main(){
    node* head = new node(5);


    node* node_2= new node(25);
    head ->link = node_2;


    node* node_3 = new node(125);
    node_2 ->link = node_3;

    node_3 ->link = NULL;


    cout << head ->value << " " << node_2 ->value << " " << node_3 -> value << endl;



    //reverse the list
    node* prev = NULL;
    node* next = NULL;
    node* current = head;

    while(current != NULL){
        next = current -> link;
        current -> link = prev;

        prev = current;
        current = next;
    }
    head = prev;

    cout << head ->value << " " << node_2 ->value << " " << node_3 -> value << endl;

}
