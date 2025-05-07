#include<bits/stdc++.h>
using namespace std;


int main(){
    int r,c;
    cin >> r >> c;
    int arr[r][c];

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }

    //Find max
    int max = 0;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }

    //Frequency array
    int freq[max+1]= {0};
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            int pos = arr[i][j];
            freq[pos]++;
            if(freq[pos] > 1){
                arr[i][j] = -1;
            }
        }
    }



    //display
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
