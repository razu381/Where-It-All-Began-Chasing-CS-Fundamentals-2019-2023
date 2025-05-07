#include<bits/stdc++.h>
#include"stack.h"
using namespace std;

int chk_precision(char c){
    if(c == '^') return 3;
    else if(c == '/' || c == '*') return 2;
    else if(c == '+' || c == '-') return 1;
    else return -1;
}


string infix_to_prefix(string s){
    reverse(s.begin(),s.end());
    Stack <char> st;
    string result;
    for(int i = 0; i < s.length(); i++){
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
            while(!st.Empty() && chk_precision(st.Top()) >= chk_precision(s[i])){
                result += st.Pop();
            }
            st.Push(s[i]);
        }

    }
    while(!st.Empty()){
        result += st.Pop();
    }
    reverse(result.begin(),result.end());
    return result;
}
int prefix_evaluation(string s){
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
            }
        }
    }
    return st.Top();
}




int main(){
    string s = "(1+2)*(3*4)";
    string prefix = infix_to_prefix(s);
    cout << prefix;
    cout << endl;
   // cout << prefix_evaluation(prefix);

}
