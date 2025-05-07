#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    bool is_prime = true;
    for(int i = 2; i < n; i++){
        if(n % i == 0) {
            is_prime = false;
            cout << "Not prime number" << endl;
            return 0;
        }
    }
    cout << "Prime number" << endl;


}
