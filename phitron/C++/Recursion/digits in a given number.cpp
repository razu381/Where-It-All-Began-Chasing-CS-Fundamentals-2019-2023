#include<bits/stdc++.h>
using namespace std;
int num;
int find_digit(int n){
    if(n < 9) {
        num++;
        return 1;
    };
    int x = find_digit(n/10);
    num++;
    return num;
}

int main(){
    cout << find_digit(5055334);
}
