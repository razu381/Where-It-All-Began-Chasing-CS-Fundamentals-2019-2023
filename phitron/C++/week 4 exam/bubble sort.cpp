#include<bits/stdc++.h>
using namespace std;
void print_array(int arr[], int size);




int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 1; i < size; i++){
        int is_sorted = 0;
        cout << "swap " << i << ": \n";
        for(int j = 0; j < size - i; j++){
            cout << "step " << j+1 << " : ";
            print_array(arr,size);
            cout << " < ";

            if(arr[j] > arr[j+1]){
                is_sorted = 1;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

            print_array(arr,size);
            cout << endl;
        }
        if(is_sorted == 0){
                return 0;
            }
        cout << endl << endl;


    }

}



void print_array(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}
