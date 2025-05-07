#include<bits/stdc++.h>
using namespace std;

int main(){
    int row,col;
    cin >> row >> col;

    int arr[row][col];

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }
    cout << endl << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int first_val = arr[0][0];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j] != arr[j][i]) {
                cout << "Not symmetric";
                return 0;
            }
        }

    }
    cout << "Symmetric" << endl;

    //cout << total << endl;
}
