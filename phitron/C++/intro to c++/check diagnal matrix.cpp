#include<bits/stdc++.h>
using namespace std;


int main(){
    int row, col;
    cin >> row >> col;
        if(row != col){
        cout << "Not diognal";
        return 0;
    }
    int mat[row][col];
    for(int i = 0;i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> mat[i][j];
        }
    }
    bool is_scaler = false;
    int scaler = mat[0][0];

    for(int i = 0;i < row; i++){
        for(int j = 0; j < col; j++){
            if(mat[i] != mat[j]){
                if(mat[i][j] != 0){
                    cout << "Not scaler";
                    return 0;
                }
            }
            else{
                if(mat[i][j] != scaler){
                    cout << "Not scaler";
                    return 0;
                }
            }
        }
    }
    cout << "Yakka Bum Bum, Yakka Bum Bum it's scaler";
}
