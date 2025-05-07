#include<bits/stdc++.h>
#include"stack.h"
using namespace std;

void reverse_stack(Stack <int> &chk){
    if(chk.empty()){
        return;
    }
    int top_elment = chk.Top();
    chk.pop;
    reverse_stack(chk);
}

int main(){
    Stack <int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    reverse_stack(st);
}
