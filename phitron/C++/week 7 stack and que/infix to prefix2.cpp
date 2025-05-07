#include<bits/stdc++.h>
#include "stack.h"
using namespace std;

int chk_precedence(char c){
    if(c == '+' || c == '-') return 1;
    else if(c == '*' || c == '/') return 2;
    else if( c == '^') return 3;
    else return -1;
}

string infix_to_prefix(string s){

    reverse(s.begin(),s.end());
    string result;
    Stack <char> st;
    for(int i = 0; i < s.length(); i++){
        //cout << "s[i] = " << s[i] << endl;
        if(s[i] >= '0' && s[i] <= '9'){
            result += s[i];
        }else if(s[i] == ')'){
            st.Push(s[i]);
        }else if(s[i] == '('){
            while(st.Top() != ')'){
                result += st.Pop();
            }
            if(!st.Empty()) st.Pop();
        }else{
            while(!st.Empty() && chk_precedence(st.Top()) >= chk_precedence(s[i])){
                result += st.Pop();
            }
            st.Push(s[i]);
        }
    }
    while(!st.Empty()) {
        result += st.Pop();
    }
    reverse(result.begin(),result.end());
    return result;
}
int prefix_evaluation(string s){
    Stack <int> st;
    for(int i = s.length() - 1; i >= 0; i--){
        cout << s[i] << endl;
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
            }
        }
    }
    return st.Top();
}
int main(){
    string s = "(7+(4*5))-(2+0)";
    string result = infix_to_prefix(s);
    cout << result << endl;
    cout << prefix_evaluation(result);
}
