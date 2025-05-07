#include<bits/stdc++.h>
using namespace std;
int total = 0;

int sum_of_digits(int digit){
    //static int total = 0;
    if(digit < 10){
        cout << "Digit = " << digit << " Total = " << total << endl;
        total += digit;
        return 0;
    }
    sum_of_digits(digit/10);
    total += digit % 10;
    cout << "Digit = " << digit << " Total = " << total << endl;
    return total  ;


}

int main(){
    cout << sum_of_digits(999999999);
}
