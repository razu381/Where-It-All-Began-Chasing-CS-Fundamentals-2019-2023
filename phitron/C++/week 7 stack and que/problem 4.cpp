#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    cin.ignore();
    string s1;
    getline(cin,s1);

    string s2 = s1;

    reverse(s2.begin(),s2.end());


    if(s1 == s2){
        cout << "YES";
    }else{
        cout << "NO";
    }


    return 0;
}

