#include<bits/stdc++.h>
using namespace std;



int main(){
    int n = 512;
    int counter = 0;



    for(int i = 1; i < n; i=i*2)
    {
        for(int j=1; j < i; j++){
            counter++;
            cout << "i = " << i << " j = " << j <<endl;
        }
        cout <<  "==========> counter = " << counter <<" >===========" <<endl;
    }


}
