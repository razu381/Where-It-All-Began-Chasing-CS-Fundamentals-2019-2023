#include<bits/stdc++.h>
#include "stack.h"
using namespace std;


int main(){
    Stack <int> os;
    Stack <int> ts;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        os.Push(num);
    }

    for(int i = 0; i < n; i++){
        int min = os.Pop();
        while(!os.Empty()){
            int num = os.Pop();
            if(num < min ) min = num;
            ts.Push(num);
        }
        cout << min << " ";
        while(!ts.Empty()){
            os.Push(ts.Pop());
        }
    }




}
