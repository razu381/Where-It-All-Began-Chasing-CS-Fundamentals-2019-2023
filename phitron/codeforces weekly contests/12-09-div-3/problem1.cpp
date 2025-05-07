#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
       int a,b,c;
       cin >> a >> b >> c;
       if(a == 1) {
            cout << 1 << endl;
            continue;
       }
       int a_time = a - 1;
       int b_time;
       if(b > c){
           b_time = (b-c) + (c-1);
       }else{
           b_time = (c-b) + (c-1);
       }
       //cout<<"A time and b time is: "  << a_time << " " << b_time << endl;
       if(a_time < b_time) cout << 1 << endl;
       else if(a_time > b_time) cout << 2 << endl;
       else cout << 3 << endl;


    }

}
