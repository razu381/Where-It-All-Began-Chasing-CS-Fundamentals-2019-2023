#include<bits/stdc++.h>
using namespace std;

void print_arr(int a[],int n){
    for(int i = 0;  i < n ;i++){
        cout << a[i] << " ";

    }
}



int main(){
    int a[] = {5,1,3,8,2,2};
    int n = sizeof(a) / sizeof(a[0]);

    for(int i = 1; i < n; i++){
        cout << "i = " << i << " : ";
        cout << endl;

        int temp = a[i];
        int j = i - 1;

        while(j >= 0 && a[j] > temp){
            //cout << "step " <<  << " : ";


            a[j+1] = a[j];
            j--;
            print_arr(a,n);
            cout << endl;

        }
        a[j+1] = temp;
        print_arr(a,n);
        cout << endl;
    }

    //print_arr(a,n);


}
