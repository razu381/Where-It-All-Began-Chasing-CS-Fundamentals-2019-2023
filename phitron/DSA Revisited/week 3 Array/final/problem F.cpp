#include<bits/stdc++.h>
using namespace std;



int main(){
    int a,b,c;
    cin >> a >> b >> c;

    int total = 0;

    if(a != b) total += 1;
    if(b != c) total += 1;
    if(c != a) total += 1;

    if(total == 0) cout << total +1;
    else cout << total << endl;
}
