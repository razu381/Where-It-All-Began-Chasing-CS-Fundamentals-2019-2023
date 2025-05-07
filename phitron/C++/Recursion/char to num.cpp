#include<bits/stdc++.h>
using namespace std;

int superDigit(string n, int k){
    if(n.length() == 1){
        int super_digit = stoi(n);
        return super_digit;
    }
    string new_string = n;
    for(int i = 0; i < k - 1; i++){
        new_string += n;

    }
    //cout << new_string << endl;
    int len_string = new_string.length();
    int total = 0;
    for(int i = 0; i < len_string; i++){
        int digit = new_string[i] - '0';
        total += digit;
    }

    cout << total << endl;

    string str_total = to_string(total);
    //cout << str_total.length() << endl;
//    if(new_string.length() == 1){
//        int super_digit = stoi(n);
//        return super_digit;
//    }
    int sum = superDigit(str_total,0);
    return sum;

}

int main(){
    string n = "9875";
    int k = 4;
    cout << superDigit(n,k);
}
