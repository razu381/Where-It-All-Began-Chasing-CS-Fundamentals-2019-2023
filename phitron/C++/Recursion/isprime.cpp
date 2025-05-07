/*
#include<bits/stdc++.h>
using namespace std;

int main(){}
*/
#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n, int divisor){
    if(divisor == n || n == 1) return true;
    if(n % divisor == 0) return false;
    return is_prime(n, divisor + 1);
}



int main(){
    for(int i = 0;i < 17; i++){

        int n;
        cin >> n;
    //    int chk = 1;
    //    for(int i = 2; i < n; i++){
    //        if(n % i == 0) chk = 0;
    //    }
    //
    //
    //    if(chk == 1) cout << "prime number " << endl;
    //    else cout << "Not prime number";

        if(is_prime(n,2) == true) cout << "Prime number" << endl;
        else cout << "NOT PRIME NUMBER" << endl;
    }
}
