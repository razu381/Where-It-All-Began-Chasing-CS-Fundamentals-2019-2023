#include<bits/stdc++.h>
using namespace std;



int main(){
    int arr[10] = {5,6,7,8,1,4,6,74,56,4};
    int size = 10;
    char c;
    cout << "Would you like to search, Y or N: ";
    cin >> c;

    while(toupper(c) == 'Y'){
        int found = 0;
        int num;
        cout << "Enter the number you want to search: ";
        cin >> num;

        for(int i = 0; i < size; i++){
            if(arr[i] == num){
                cout << num << " at position " << i << endl;
                found = 1;
            }
        }
        if(found == 0){
            cout << "Number not found \n";
        }
        cout << "Would you like to search again? , Y or N: ";
        cin >> c;
    }
}
