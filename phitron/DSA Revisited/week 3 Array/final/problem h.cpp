#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin >> s;

    int start = s.find_first_of('A');
    int end = s.find_last_of('Z');

    int total = 0;
    for(int i = start; i <= end; i++) total ++;
    cout << total;
}
