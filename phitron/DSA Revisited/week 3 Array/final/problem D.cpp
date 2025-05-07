#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;


    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        int arr[n];

        for(int i = 0; i < n; i++) cin >> arr[i];

        int max_num = *(max_element(arr,arr+n));
        //cout << "Max num = " << max_num << endl;

        int counter[max_num+1] = {0};
        for(int i = 0;i < n;i++) counter[arr[i]]++;
        //for(int i = 0; i < n; i++) cout << counter[i] << " ";
        //cout << endl;

        int max_counter = *(max_element(counter,counter + max_num+1));

        //cout << "Max counter = " << max_counter << endl;
        cout << n - max_counter << endl;
    }
}
