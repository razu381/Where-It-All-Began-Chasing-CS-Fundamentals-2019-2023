#include<bits/stdc++.h>
using namespace std;
void make_prefix(int arr[],int prefix[], int n);


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout << "Enter number of test cases: ";
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        cout << "Case " << i+1 << ": \n";
        //cout << "enter n and q: ";
        int n,q;
        cin >> n >> q;

        int arr[n];
        //cout << "enter array items: ";
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int prefix[n];
        make_prefix(arr,prefix,n);

        //queries
        for(int i = 0; i < q; i++){
            //cout << "Enter direction: ";
            int dir;
            cin >> dir;

            if(dir == 1){
                int i;
                cin >> i;
                cout << arr[i] << "\n";
                arr[i] = 0;
                make_prefix(arr,prefix,n);
            }else if(dir == 2){
                int i,v;
                cin >> i >> v;

                arr[i] += v;
                make_prefix(arr,prefix,n);

            }else if(dir == 3){
                int i,j;
                cin >> i >> j;
                if(i == 0){
                    cout << prefix[j] << "\n";
                }else{
                    cout << prefix[j] - prefix[i-1] << "\n";
                }
            }
        }


    }



}

void make_prefix(int arr[],int prefix[], int n){
    prefix[0] = arr[0];

    for(int i = 1; i < n; i++){
        prefix[i] = arr[i] + prefix[i-1];
    }
}
