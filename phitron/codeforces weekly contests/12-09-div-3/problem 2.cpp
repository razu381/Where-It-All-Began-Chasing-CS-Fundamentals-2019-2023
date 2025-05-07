#include<bits/stdc++.h>
using namespace std;


int main(){
    char alpha[27] = {'0','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int n;
        cin >> n;
        string s;
        cin >> s;
        string res;
        for(int j = n - 1; j >= 0; j--){
            if(s[j] == '0'){
                string two_char;
                two_char += s[j-2];
                two_char += s[j-1];

                int num = stoi(two_char);
                res += alpha[num];
                j -= 2;
                //cout << "NUmber is == " << num << endl;

            }else{
                res += alpha[s[j] - '0'];
                //cout << "Number is   ==  "<< s[j] - '0' << endl;
            }
        }
        reverse(res.begin(),res.end());
        cout << res << endl;
    }
}

