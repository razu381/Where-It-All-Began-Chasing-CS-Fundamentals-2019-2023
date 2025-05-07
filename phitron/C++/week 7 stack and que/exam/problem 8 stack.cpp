#include<bits/stdc++.h>
#include "stack.h"
using namespace std;



int main(){
    Stack <int> st;
    int x = 8+5;
    int y = x + 3;
    int z = y + x;
    st.Push(x+y);
    st.Push(y+z);
    st.Pop();
    st.Push(y*z);
    st.Push(x*y);
    st.Pop();
    st.Pop();

    while(!st.Empty()){
        cout << st.Pop() << endl;
    }
}
