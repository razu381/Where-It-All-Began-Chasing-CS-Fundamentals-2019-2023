#include<bits/stdc++.h>
using namespace std;


int main(){
    int row,col;
    cout << "Enter row col: ";
    cin >> row >> col;
    int mat[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> mat[i][j];
        }
    }
    int sum = 0;
    for(int i = 0; i < col; i++){
        sum += mat[1][i];
    }
    cout << sum;
}
