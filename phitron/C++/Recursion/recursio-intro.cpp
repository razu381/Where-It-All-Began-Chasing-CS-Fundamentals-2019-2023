#include<bits/stdc++.h>
using namespace std;


int calculate(int num){
    //int  total = 0;
    if(num == 6){
        return 0;
    }
    int s_sum = calculate(num+1);
    int total = num + s_sum;
    return total;



}
int main(){

    cout << calculate(1);

}
