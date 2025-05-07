#include<bits/stdc++.h>
using namespace std;


class node{
public:
    int val;
    node* prev;
    node* next;

    node(int value){
        val = value;
        prev = NULL;
        next = NULL;
    }
};

class Stack{
    node* head;
    node* top;
    int count = 0;
public:
    Stack(){
        head = NULL;
        top = NULL;
    }
    //push
    void push(int val){
        node* new_node = new node(val);
        if(head == NULL){
            head = top = new_node;
            count++;
            return;
        }
        top -> next = new_node;
        new_node -> prev = top;
        top = new_node;
        count++;
    }
    //pop
    int pop(void){
        node* del_node;
        //store which node to delete
        del_node = top;
        int check;//value we are gonna return;
        if(head == NULL){
            cout << "Stack underflow" << endl;
            return -1;
        }
        if(top == head){ //There is only one element
            head = top = NULL;
        }else{//more than one element
            //as we have to decrease top by 1
            top = del_node -> prev;
            //make top -> next = NULL which mean last_node -> prev -> next;
            top -> next = NULL;
        }
        check = del_node -> val;
        delete(del_node);
         count --;
        return check;
    }
    //empty
    bool empty(){
        if(head == NULL) return true;
        else return false;
    }
    //size
    int size(){
        return count;
    }
    //Top
    int Top(){
        if(top == NULL){
            cout << "There is no element in top" << endl;
        }else{
            return top;
        }
    }
};
