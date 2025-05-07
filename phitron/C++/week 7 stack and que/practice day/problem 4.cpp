#include<bits/stdc++.h>
#include "queue.h"
#include "stack.h"
using namespace std;


int main(){
    Queue <int> qt;
    int n;
    cin >> n;
    for(int i = 0;  i < n; i++){
        int num;
        cin >> num;
        qt.Push(num);
    }
    Stack <int> st;
    while(!qt.Empty()){N
        st.Push(qt.Pop());
    }

    while(!st.Empty()){
        cout << st.Pop() << " ";
    }
}
