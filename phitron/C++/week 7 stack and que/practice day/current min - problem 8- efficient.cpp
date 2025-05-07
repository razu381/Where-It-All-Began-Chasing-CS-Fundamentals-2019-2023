#include<bits/stdc++.h>
#include "stack.h"
using namespace std;



int main(){
    Stack <int> OS;
    Stack <int> Mins;

    int n;
    cin >> n;
    int min = 999999999;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        if(num <= min){
            min = num;
            Mins.Push(num);
        }
        OS.Push(num);
    }

    while(!OS.Empty()){
        cout << Mins.Top() << endl;
        if(OS.Top() == Mins.Top()){
            Mins.Pop();
            OS.Pop();
        }else{
            OS.Pop();
        }
    }




}
