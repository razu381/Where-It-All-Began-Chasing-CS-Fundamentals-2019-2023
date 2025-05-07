#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int A[n];

    //get input from the user
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    int m;
    cin >> m;
    int B[m];

    for(int i = 0; i < m; i++){
        cin >> B[i];
    }

    //find max
    int a_max = *(max_element(A,A+n));
    int b_max = *(max_element(B,B+m));
    int max;
    a_max > b_max ? max = a_max : max = b_max;

    //frequency array
    int freq[max+1] = {0};
    for(int i = 0; i < n; i++){
        int pos = A[i];
        freq[pos]++;
    }
    for(int i = 0; i < m; i++){
        int pos = B[i];
        freq[pos]++;
    }

    for(int i = 0; i < n; i++){
        if(freq[A[i]] == 1){
            cout << A[i] << " ";
        }
    }



}
