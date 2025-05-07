#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, k;
    cin >> n >> k;

    int sticks[n];

    for(int i = 0;i < n; i++) cin >> sticks[i];

    sort(sticks, sticks + n);

    int maximum = 0;
    int counter = 0;
    for(int i = n - 1;i >= 0; i--) {
        maximum += sticks[i];
        counter++;
        if(counter == k) break;
    }
    cout << maximum << endl;
}
