#include<bits/stdc++.h>
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    //cout << "enter number of test case: ";
    cin >> t;
    //cout << "Enter blank: ";
    // blank;
    //cin >> blank;
    for(int i = 0; i < t; i++){
        //cout << "Enter n and q: ";
        int n,q;
        cin >> n >> q;

        //cout << "Enter array items: ";
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        cout << "Case " << i+1 << ": \n";
        for(int k = 0;k  < q; k++){
            //cout << "Enter i and j: ";
            int i,j;
            cin >> i >> j;
            //AS index starts from 1
            i--;
            j--;

            int min = arr[i];
            for(int start = i+1;  start <= j; start++){
                if(arr[start] < min){
                    min = arr[start];
                }
            }
            cout << min << endl;
        }
    }
}
