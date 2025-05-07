#include<bits/stdc++.h>
using namespace std;

int main(){
    string o,e;
    cin >> o >> e;

    string pass = "";

    for(int i = 0,j = 0; i < o.length() || j < e.length(); i++,j++){
        if(i != o.length()) pass += o[i];
        if(j != e.length()) pass += e[j];
    }

    cout << pass;
}
