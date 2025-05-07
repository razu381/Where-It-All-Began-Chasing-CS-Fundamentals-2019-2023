#include<bits/stdc++.h>
using namespace std;


int main(){
    string s = "ab ba bc bd ed";
    stringstream stream(s);

    string w;

    while(stream >> w){
        cout << w << endl;
    }
}
