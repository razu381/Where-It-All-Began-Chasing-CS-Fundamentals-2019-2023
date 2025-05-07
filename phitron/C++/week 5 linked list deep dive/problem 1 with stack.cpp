#include<bits/stdc++.h>
#include"stack.h"
using namespace std;



int main(){
    Stack <int>  st;
    st.Push(6);
    st.Push(5);
    st.Push(4);
    st.Push(3);
    st.Push(2);
    st.Push(1);

    int res = st.mid();
    cout << res << endl;
    for(int i = 0; i < 6; i++){
        cout << st.Pop() << " ";
    }


}
