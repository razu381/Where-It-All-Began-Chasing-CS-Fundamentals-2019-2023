#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int highest[2] ={1,0};

    for(int i = 1; i <= n; i++){
        int max_num = 0;
        int num = i;

        while(num % 2 == 0){
            max_num += 1;
            num /= 2;
        }

        if(max_num > highest[1]){
            highest[0] = i;
            highest[1] = max_num;
        }
    }

    cout << highest[0];
}
