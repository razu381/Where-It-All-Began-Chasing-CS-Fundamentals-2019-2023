#include<bits/stdc++.h>
using namespace std;


template <typename N> class node{
public:
    N val;
    node* next;

    node(N value){
        val = value;
        next = NULL;
    }
};

template <typename Q> class Queue{
public:
    node <Q> *Front = NULL;
    node <Q> *Back = NULL;
    //Front = NULL;
    //Back = NULL:
    void Push(Q val){
        node <Q> *new_node = new node <Q>(val);
        if(Front == NULL){
            Front = new_node;
            Back = new_node;
            return;
        }

        Back -> next = new_node;
        Back = Back -> next;
    }
    //POP
    Q Pop(){
        Q chk;
        if(Back == NULL){
            cout << "Queue underflow";
            return chk;
        }
        node <Q> *del_node = Front;
        Front = Front -> next;
        if(Front == NULL){
            Back = NULL;
        }
        chk = del_node -> val;
        delete del_node;
        return chk;
    }


    //Give the front and back
    Q get_front(){
        if(Front != NULL) return Front -> val;
        else cout << "NULL" << endl;
    }

    Q get_back(){
        if(Back != NULL) return Back -> val;
        else cout << "NULL" << endl;
    }
    //Empty
    bool Empty(){
        if(Front == NULL && Back == NULL) return true;
        else return false;
    }

};
