#include <bits/stdc++.h>
#include "stack.h"
using namespace std;

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

            case '^':
                st.Push(pow(a,b)) ;
                break;

            default:
                break;
            }

        }
    }
    return st.Top();

}


int main(){
    string s = "+*423";
    cout << prefix_evaluation(s) << endl;
}
