#include<bits/stdc++.h>
//#include "queue.h"
#include "stack.h"
using namespace std;

int chk_balance(string s){
    Stack <char> st;
    if(s[0] == ')' || s[0] == '}' || s[0] == ']') return -1;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            st.Push(s[i]);
        }else if(s[i] == ')'){
            char br = st.Pop();
            if(br != '(') return -1;
        }else if(s[i] == '}'){
            char br = st.Pop();
            if(br != '{') return -1;
        }else if(s[i] == ']'){
            char br = st.Pop();
            if(br != '[') return -1;
        }
    }
    if(!st.Empty()) return -1;
    return 0;
}

int main(){
    string s = "][{()[]}]";
    if(chk_balance(s) == -1) cout << "NO" << endl;
    else cout << "Yes" << endl;

}
