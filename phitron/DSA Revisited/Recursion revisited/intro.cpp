#include<bits/stdc++.h>
using namespace std;
int counter = 1;


void print(){
    if(counter == 10) return;
    cout <<  counter << endl;
    counter++;
    print();
}

int main(){
    print();
}
