#include<bits/stdc++.h>
using namespace std;

void copystring(string orgstr,string &copystr,int start,int end){
    if(start > end) {
        cout << copystr << endl;
        return;
    }
    copystr += orgstr[start];
    copystring(orgstr, copystr, start+1,end);
}

int main(){
    for(int i = 0; i < 5; i++){
        string orgstr;
        cin >> orgstr;

        string copystr = "";
        int len = orgstr.length() - 1;
        copystring(orgstr,copystr,0,len);
    }
}
