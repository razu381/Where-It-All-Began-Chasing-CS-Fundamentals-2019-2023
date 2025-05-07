#include<bits/stdc++.h>
using namespace std;


int main(){
    int x = 1;
    int n = 25;

    int counter = 0;
    for(int i = 1;x <= n; i++){
        cout << "i = " << i << " X = " << x << endl;
        x = x + i;
        counter++;
    }
    cout << counter;
}
