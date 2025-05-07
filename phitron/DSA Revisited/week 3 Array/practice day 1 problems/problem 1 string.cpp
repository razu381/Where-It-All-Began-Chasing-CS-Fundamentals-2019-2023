#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        string s;
        cin >> s;
        int first = s.find_first_of('1');
        int last = s.find_last_of('1');

        bool is_zero = false;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '1') is_zero = true;
        }

        if(is_zero == false){

            cout << "No" << endl;

        }else{
            bool flag = true;
            for(int i = first; i < last; i++){
                if(s[i] == '0') {
                    flag = false;
                    break;
                }
            }
            if(flag == true) cout << "YES" << endl;
            else cout << "NO" << endl;
        }

    }

}
