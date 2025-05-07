#include<bits/stdc++.h>
using namespace std;

int main(){
    //dynamic memory allocation in c++
    int n;
    cin >> n;
    int *ptr = new int[n]{1,2,3,4,5};
    for(int i = 0; i < n; i++){
        cout << ptr[i] << endl;
    }
    delete ptr;
    cout << "ptr deleted \n";
    for(int i = 0; i < n; i++){
        cout << ptr[i] << endl;
    }
}
