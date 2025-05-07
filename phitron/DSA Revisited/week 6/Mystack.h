#include<bits/stdc++.h>
using namespace std;

template <typename n> class node{
public:
    n val;
    node* next;
    node* prev;
    node(n val){
        this -> val = val;
        next = NULL;
        prev = NULL;
    }
};

template <typename S> class Stack{
    node <S> *head;
    node <S> *top;
    int count = 0;

public:
    Stack(){
        head = NULL;
        top = NULL;
    }
    //Push
    void Push(S val){
        node <S> *new_node = new node <S> (val);

        if(head == NULL){
            head = new_node;
            top = new_node;
            count++;
            return;
        }
        top -> next = new_node;
        new_node -> prev = top;
        top = new_node;
        count++;
    }

    //Pop out a value from a linked list
    S Pop(){
        node <S> *del_node = top;
        S chk;
        if(head == NULL) {
            cout << "Stack underflow" << endl;
            return chk;
        }
        else if(top == head){
            top = head = NULL;
        }
        else{
            top = del_node -> prev;
            top -> next = NULL;
        }
        chk = del_node -> val;
        delete del_node;
        count--;
        return chk;

    }

    //is the list empty
    bool Empty(){
        if(head == NULL) return true;
        else return false;
    }

    //Return the top element of stack
    S Top(){
        S chk;
        if(head == NULL){
            cout << "Stack underflow" << endl;
        }
        else chk = top -> val;
        return chk;
    }

    //size of stack
    int Size(){
        return count;
    }

};

