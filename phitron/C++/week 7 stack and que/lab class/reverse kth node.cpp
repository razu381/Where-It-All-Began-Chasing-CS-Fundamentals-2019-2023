#include<bits/stdc++.h>
#include "queue.h"
#include "stack.h"
using namespace std;


int main(){
    Stack <int> st;
    Queue <int> qt;
    int n, k;
    cin >> n >> k;
    for(int i = 0;  i < n; i++){
        int num;
        cin >> num;
        qt.Push(num);
    }

    int loop_num = n / k;
    int remaining_num = n - (k*loop_num);

    for(int i = 0; i < loop_num; i++){
        for(int i = 0; i < k; i++){
            st.Push(qt.Pop());
        }
        for(int i = 0; i < k; i++){
            qt.Push(st.Pop());
        }
    }

    for(int i = 0; i < remaining_num; i++){
        st.Push(qt.Pop());
    }
    for(int i = 0; i < remaining_num; i++){
        qt.Push(st.Pop());
    }

    while(!qt.Empty()){
        cout << qt.Pop() << " ";
    }
    cout << endl;


}
