#include<bits/stdc++.h>
using namespace std;

int fac_parameter(int num, int total){
    if(num == 0) return total;
    fac_parameter(num-1,total * num);

}

int fac_non_functional(int num){
    if(num == 1) return 1;
    return num * fac_non_functional(num-1);
}


int main(){
    cout << fac_non_functional(5);
}
