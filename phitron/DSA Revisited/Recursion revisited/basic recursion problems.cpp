#include<bits/stdc++.h>
using namespace std;
int counter = 0;

void print_name(){
    if(counter > 5) return;
    cout << "Razu" << endl;
    counter++;
    print_name();
}


void print_num(int start,int end){
    if(start > end) return;
    cout << start << endl;
    print_num(start+1, end);
}


void print_num_backward(int num){
    if(num < 1) return;
    cout << num << endl;
    print_num_backward(num -1);
}

int calc_total(int n, int total){
    if(n == 0) return total;
    calc_total(n-1,total + n);
}

int main(){
    cout << calc_total(5,0);
}
