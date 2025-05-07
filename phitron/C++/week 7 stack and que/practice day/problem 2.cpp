#include<bits/stdc++.h>
#include"queue.h"
using namespace std;




int main(){
    Queue <int> qt;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        qt.Push(num);
    }

    int m;
    cin >> m;

    for(int i = 0; i < m; i++){
        int num;
        cin >> num;
        int count = 0;

        Queue <int> qt_2;
        while(!qt.Empty()){
            int q_num = qt.Pop();
            if(q_num == num){
                count++;
            }
            qt_2.Push(q_num);

        }
        if(count == 0) count = -1;
        cout << count << endl;
        while(!qt_2.Empty()){
            qt.Push(qt_2.Pop());
        }
    }
}
