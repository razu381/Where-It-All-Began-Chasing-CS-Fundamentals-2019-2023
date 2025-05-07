#include<bits/stdc++.h>
using namespace std;





int main(){
    int n;
    cin >> n;

    string str = to_string(n);

    if(str[0] == str[2]){
        cout << "Yes";
    }else{
        cout << "No";
    }

}
