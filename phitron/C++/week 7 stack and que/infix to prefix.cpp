#include<bits/stdc++.h>
#include "stack.h"
using namespace std;

int chk_precedence(char c){
    if(c == '+' || c == '-') return 1;
    else if(c == '*' || c == '/') return 2;
    else if( c == '^') return 3;
    else return -1;
}
int infix_to_prefix(string s){
    Stack <int> st;
    for(int i = s.length() - 1; i >= 0; i--){
        if(s[i] >= '0' && s[i] <= '9'){
            st.Push(s[i] - '0');
        }
        else
        {
            int a = st.Pop();
            int b = st.Pop();
            switch(s[i])
            {
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
    string s = "(7+(4*5))-(2+0)";
    reverse(s.begin(),s.end());
    Stack <char> st;
    string new_string = "";
    for(int i = 0;i < s.length(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            new_string += s[i];
        }else if(s[i] == ')'){
            st.Push(s[i]);
        }else if(s[i] == '('){
            while(!st.Empty() && st.Top() != ')'){
                new_string += st.Pop();
            }
            if(!st.Empty())  st.Pop();

        }else{
                while(!st.Empty() && chk_precedence(st.Top()) >= chk_precedence(s[i]) ){
                    new_string += st.Pop();
                }
                st.Push(s[i]);

        }
    }
    while(!st.Empty()){
        new_string += st.Pop();
    }
    reverse(new_string.begin(),new_string.end());
    int res = infix_to_prefix(new_string);
    cout << res;
}
