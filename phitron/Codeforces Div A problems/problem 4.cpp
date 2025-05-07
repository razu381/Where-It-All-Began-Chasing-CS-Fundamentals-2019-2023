#include<bits/stdc++.h>
using namespace std;

string to_lower(string s){
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 32;
        }
        //cout << s[i] << endl;
     }
     return s;
    //s[s.length()] = '\0';
}

int main(){
    string s1,s2;
    cin >> s1 >> s2;
    s1 = to_lower(s1);
    s2 = to_lower(s2);

    for(int i = 0; i < s1.length(); i++){
        if(s1[i] < s2[i]){
            cout << -1;
            return 0;
        }else if(s2[i] < s1[i]){
            cout << 1;
            return 0;
        }
    }
    cout << 0;

}
