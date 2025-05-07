
#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){

        int d;
        cin >> d;
        int earned[d];
        int spent[d];
        int prefix_A[d];
        int prefix_B[d];

        for(int i = 0; i < d; i++){
            cin >> earned[i];
        }
        for(int i = 0; i < d; i++){
            cin >> spent[i];
        }

        //count prefix sum of both
        prefix_A[0] = earned[0];
        for(int i = 1; i < d; i++){
            prefix_A[i] = earned[i] + prefix_A[i-1];
        }

        prefix_B[0] = spent[0];
        for(int i = 1; i < d; i++){
            prefix_B[i] = spent[i] + prefix_B[i-1];
        }

        int q;
        cin >> q;
        for(int i = 0; i < q; i++){
            int x;
            cin >> x;
            int emotion = prefix_A[x] - prefix_B[x];
            if(emotion < 0){
                cout << 0 << " ";
            }else{
                cout << 1 << " ";
            }
        }
    }



}
