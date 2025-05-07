#include<bits/stdc++.h>
using namespace std;


template <typename N> class node{
public:
    N val;
    node* prev;
    node* next;

    node(N value){
        val = value;
        prev = NULL;
        next = NULL;
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
    //push
    void Push(S val){
        node <S> *new_node = new node <S> (val);
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
    S Pop(){
        node<S> *del_node;
        //store which node to delete
        del_node = top;
        S check;//value we are gonna return;
        if(head == NULL){
            cout << "Stack underflow" << endl;
            return check;
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
    bool Empty(){
        if(head == NULL) return true;
        else return false;
    }
    //size
    int Size(){
        return count;
    }
    //Top
    S Top(){
        S chk;
        if(top == NULL){
            cout << "There is no element in top" << endl;

        }else{
            chk =  top -> val;

        }
        return chk;
    }
    //Mid
    S mid(){
        node <S> *slow = head;
        node <S> *fast = head;

        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        return slow -> val;
    }
};
