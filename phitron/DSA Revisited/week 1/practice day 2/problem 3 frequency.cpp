#include<bits/stdc++.h>
using namespace std;



int main(){

    string s;
    cin >> s;
    string alpha = "abcdefghijklmnopqrstuvwxyz";

    for(int i = 0; i < alpha.length(); i++){
        int is_found = 0;

        for(int j = 0; j < s.length(); j++){
            cout << alpha[i] << " == " << s[j] << endl;
            if(alpha[i] == s[j]){
              is_found = 1;
              break;
            }
        }
        if(is_found == 0){
            cout << alpha[i];
            return 0;
        }
    }
    cout << "None";

}
