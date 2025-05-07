#include<bits/stdc++.h>
#include "stack.h"
#include "queue.h"
using namespace std;




int main(){
    int n;
    cin >> n;
    for(int j = 2; j < n; j++){
        bool is_prime = true;
        for(int i = 2; i < j; i++){
            if(n % i == 0){
                //cout << "NOT PRIME";
                is_prime = false;
                break;
            }
        }
        if(is_prime == true){
            cout << j << " ";
        }

    }

}
