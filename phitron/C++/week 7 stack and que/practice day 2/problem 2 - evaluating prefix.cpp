#include<bits/stdc++.h>
#include "stack.h"
using namespace std;

void evaluate_prefix(string s){
    Stack <int> st;
    for(int i = s.length() - 1; i >= 0; i--){
        if(s[i] >= '0' && s[i] <= '9'){
            st.Push(s[i] - '0');
        }else{
            int a = st.Pop();
            int b = st.Pop();

            switch(s[i]){
            case '+':
                st.Push(a+b);
                break;
            case '-':
                st.Push(a-b);
                break;
            case '*':
                st.Push(a*b);
                break;
            case '/':
                st.Push(a/b);
                break;
            case '^':
                st.Push( pow(a,b));
                break;
            default:
                break;
            }

        }
    }
    cout << st.Top();
}

int main(){
    string s;
    cin >> s;
    evaluate_prefix(s);
}
