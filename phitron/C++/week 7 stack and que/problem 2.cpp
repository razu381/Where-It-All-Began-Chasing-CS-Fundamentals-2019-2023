#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t ;
    for(int i = 0; i < t; i++){
        long long s,a,b,c;
        cin >> s >> a >> b >> c;
        long long total = a+b+c;
        cout << s - total << endl;
    }
    return 0;
}
