#include<bits/stdc++.h>
#include "queue.h"
#include "stack.h"
using namespace std;



int main(){
    Stack <int> os;
    int n;
    cin >> n;
    for(int i = 0;  i < n; i++){
        int num;
        cin >> num;
        os.Push(num);
    }

    //temporary stack
    Stack <int> ts;
    ts.Push(os.Pop());
    while(!os.Empty()){
        while(!os.Empty() && os.Top() < ts.Top()){
            ts.Push(os.Pop());
        }
        if(!os.Empty()) {
            int temp = os.Pop();
            while(!ts.Empty() && temp > ts.Top()){
            os.Push(ts.Pop());
            }
            ts.Push(temp);
        }


    }

    while(!ts.Empty()){
        cout << ts.Pop() << " ";
    }
}
