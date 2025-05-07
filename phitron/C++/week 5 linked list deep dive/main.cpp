#include<bits/stdc++.h>
#include"stack.h"
using namespace std;

int global_ID = 100;

class person{
    string name;
    int id;
    float salary;
public:
    person(){
        name = "";
        id = -1;
        salary = -1.0;
    }
    void set_name(string name){
        this -> name = name;
    }
    void set_salary(float salary){
        this -> salary = salary;
    }
    person(string name, float salary){
        set_name(name);
        set_salary(salary);
        id = global_ID;
        global_ID++;
    }
    int get_id(){
        return id;
    }
    string get_name(){
        return name;
    }
    float get_salary(){
        return salary;
    }
    void print(){
        cout << name << " ! " << id << " ! " << salary << endl;
    }

};

int main(){
    Stack <person> st;
    person a("Akib Zaman",654.6);
    person b("Ratain Zaman",45.6);
    person c("Hadiuz Zaman",432.76);

    st.Push(a);
    st.Push(b);
    st.Push(c);

    while(!st.Empty()){
        person printobj;
        printobj = st.Pop();
        printobj.print();
    }
    return 0;
}
