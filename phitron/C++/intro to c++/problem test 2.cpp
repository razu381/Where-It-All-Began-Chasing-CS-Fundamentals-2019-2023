#include<bits/stdc++.h>
using namespace std;

int main(){
    int nums[2][5] = {{1,2,3,4,5},{6,7,8,9,10}};

    //get input all items in an array

    //I for rows
    for(int i = 0; i < 2; i++){
        //J for columns
        for(int j = 0; j < 5; j++){
            cin >> nums[i][j];
        }
    }


    //print all items in an array
    //I for rows
    for(int i = 0; i < 2; i++){
        //J for columns
        for(int j = 0; j < 5; j++){
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }

}
