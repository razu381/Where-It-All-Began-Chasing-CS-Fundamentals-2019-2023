#include<bits/stdc++.h>
using namespace std;





int main(){
    string s;
    cin >> s;
    int len = s.length();
    //cout << len;
    int count = 0;
    int z_pos = 0;

    for(int i = 0; i < len; i++){
        if(s[i] == 'Z'){
            z_pos = i;
        }
    }
    //cout << "Z pos = " << z_pos << endl;

    for(int i = 0; i < len; i++){
        if(s[i] == 'A'){
            count++;

            while(i != z_pos){
                count++;
                i++;
            }
            cout << count;
            return 0;
        }
    }

}
