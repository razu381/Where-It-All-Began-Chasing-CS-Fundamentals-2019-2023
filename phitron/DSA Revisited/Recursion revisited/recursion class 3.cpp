#include<bits/stdc++.h>
using namespace std;

void print_num(int num){
    if(num == 11) return;
    print_num(num+1);
    cout << num << endl;
}

int main(){
    print_num(1);

}
