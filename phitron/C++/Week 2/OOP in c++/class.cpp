#include<bits/stdc++.h>
using namespace std;



struct employe{
    int id;
    int age;
    int salary;

    employe(int a, int b, int c){
        id = a;
        age = b;
        salary = c;
    }
};




int main(){
    employe p1(120,33,330000);
    cout << "ID: " << p1.id << endl;
    cout << "Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary << endl;
}
