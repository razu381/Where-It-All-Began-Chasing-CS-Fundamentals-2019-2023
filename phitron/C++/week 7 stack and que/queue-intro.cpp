#include<bits/stdc++.h>
#include "queue.h"
using namespace std;



int main(){
    Queue <char> t;
    t.Push('a');
    t.Push('b');
    t.Push('c');
    t.Push('d');
    t.Push('e');
    t.Push('f');

    int n = 6;
    cout << t.get_front() << " " << t.get_back() << endl;
     while(n--){
        cout << t.Pop() << endl;
    }
}
