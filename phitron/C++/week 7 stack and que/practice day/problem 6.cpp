#include<bits/stdc++.h>
#include "queue.h"
#include "stack.h"
using namespace std;


int main(){
    Queue <int> qt;
    int n, k;
    cin >> n >> k;
    for(int i = 0;  i < n; i++){
        int num;
        cin >> num;
        qt.Push(num);
    }



    Stack <int> st;
    int count = 0;
    while(count < k){
        st.Push(qt.Pop());
        count++;
    }

    Queue <int> temp;

    while(!st.Empty()){
        temp.Push(st.Pop());
    }
    while(!qt.Empty()){
        temp.Push(qt.Pop());
    }


    while(!temp.Empty()){
        cout << temp.Pop() << " ";
    }
}
