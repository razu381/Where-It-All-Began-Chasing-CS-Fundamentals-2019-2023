#include<bits/stdc++.h>
using namespace std;





int main(){
    int a,b,c;
    cin >> a >> b >> c;

    int num = 3;

    if(a == b){
        num--;
    }
    if(a == c){
        num--;
    }
    if(b == c){
        num--;
    }

    if(num == 0){
        cout << 1;
    }else{
        cout << num;
    }

}
