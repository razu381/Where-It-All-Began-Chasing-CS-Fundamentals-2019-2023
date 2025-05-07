#include<stdio.h>
using namespace std;


int sum(int n){
    if(n == 0) return 0;
    int total = sum(n-1);
    return n+total;
}

int main(){
    cout << sum(n);
}
