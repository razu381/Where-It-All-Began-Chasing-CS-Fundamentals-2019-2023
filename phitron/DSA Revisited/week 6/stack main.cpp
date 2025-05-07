#include<bits/stdc++.h>
#include "Mystack.h"
using namespace std;


int main(){
    Stack <char> st;
    st.Push('k');
    st.Push('l');
    st.Push('m');

   while(!st.Empty()) {
    cout << "Top = " << st.Top() << " ";
    cout << st.Pop() << endl;
   }
}
