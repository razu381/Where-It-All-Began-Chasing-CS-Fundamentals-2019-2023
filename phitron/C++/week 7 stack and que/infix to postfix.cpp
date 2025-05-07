#include<bits/stdc++.h>
#include"stack.h"
using namespace std;

int chk_precision(char c){
    if(c == '^') return 3;
    else if(c == '/' || c == '*') return 2;
    else if(c == '+' || c == '-') return 1;
    else return -1;
}

string infix_to_postfix(string s){
    Stack <char> st;
    string res;
    for(int i = 0; i < s.length() ; i++){
        if(s[i] >= '0' && s[i] <= '9'){
            res += s[i];
        }else if(s[i] == '('){
            st.Push(s[i]);
        }else if(s[i] == ')'){
            while(!st.Empty() && st.Top() != '('){
                 res += st.Pop();
            }
            if(!st.Empty()) st.Pop();
        }else{
            while(!st.Empty() && chk_precision(st.Top()) >= chk_precision(s[i])){
                res += st.Pop();
            }
            st.Push(s[i]);
        }
    }
    while(!st.Empty()){
        res += st.Pop();
    }
    return res;
}

int posfix_evaluation(string s){
    Stack <int> st;
    for(int i = 0; i < s.length(); i++){
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
            default:
                break;
            }
        }
    }
    return st.Top();
}


int main(){
    string s = "A+B+C+D";
    string postfix = infix_to_postfix(s);
    cout << postfix << endl;
    //cout << posfix_evaluation(postfix);
}
