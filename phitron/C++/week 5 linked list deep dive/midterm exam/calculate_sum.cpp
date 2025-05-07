#include<bits/stdc++.h>
using namespace std;


int summation(int n,int sum){
  if(n == 0){
    return sum;
    //return;
  }
  summation(n-1,sum+n);

}


int main(){
    int n = 5;
    int total = 0;

    cout << summation(n,total);


}
