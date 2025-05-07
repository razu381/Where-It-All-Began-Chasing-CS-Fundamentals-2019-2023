/*
#include<bits/stdc++.h>
using namespace std;

int main(){}
*/


#include<bits/stdc++.h>
using namespace std;


void reverse_str(string &s, int left, int right){
    if(left >= right) return;

    reverse_str(s,left+1,right-1);
    swap(s[left],s[right]);

}

int main(){
    int n;cin >> n;
    string s;
    cin >> s;

    reverse_str(s,0,n-1);
    cout << s;
}
