#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;


    for(int i = 0; i < t; i++){
        cout << "Case " << t << ": " << endl;
        int n,q;
        cin >> n >> q;
        int arr[n];

        for(int i = 0; i < n; i++) cin >> arr[i];

        for(int i = 0; i < q; i++){
            int num;
            cin >> num;

            switch(num){
            case 1:
                int i;
                cin >> i;
                cout << arr[i] << endl;
                arr[i] = 0;
                break;
            case 2:
                int ii,vv;
                cin >> ii >> vv;
                arr[ii] += vv;
                break;
            case 3:
                int iii,jjj;
                cin >> iii >> jjj;
                int total = 0;
                for(int start = iii; start <= jjj; start++) total += arr[start];
                cout << total << endl;
                break;

            }
        }


    }
}
