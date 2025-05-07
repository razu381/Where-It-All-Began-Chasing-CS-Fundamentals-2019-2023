#include<bits/stdc++.h>
using namespace std;




int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        int arr[n];

        //take array input
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        //frequency array
        int freq[1001] = {0};

        for(int i = 0; i < n; i++){
            int pos = arr[i];
            freq[pos]++;
        }
        //print frequency array
//        cout << "Freq array = ";
//        for(int i = 0; i < 11; i++){
//            cout << freq[i] << " ";
//        }
//        cout << endl;

        int max_num = *(max_element(freq, freq+1001));

        //cout << "Max = " << max_num << " N = " << n << endl;
        cout << n - max_num << endl;
    }


}
