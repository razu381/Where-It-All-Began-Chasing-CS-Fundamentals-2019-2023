#include<bits/stdc++.h>
using namespace std;

void firstCap(string s,int start, int end){
    if(start > end){
        cout << "There is no uppecase letter" << endl;
        return;
    }
    if(s[start] >= 'A' && s[start] <= 'Z'){
        cout << s[start] << endl;
        return;
    }
    firstCap(s,start+1,end);
}



int main(){
    for(int i = 0; i < 5; i++){
        string s;
        cin >> s;
        firstCap(s,0,s.length() - 1);
    }
}

