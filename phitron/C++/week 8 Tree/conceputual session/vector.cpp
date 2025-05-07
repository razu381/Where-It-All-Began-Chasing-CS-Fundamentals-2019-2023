#include<bits/stdc++.h>
using namespace std;


int main(){
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);


    for(auto element:v){
        cout << element << " ";
    }

    vector <int> v2(3,33);
    cout << endl;
    for(auto element:v2){
        cout << element << " ";
    }

    swap(v,v2);
    cout << endl;
    for(auto element: v){
        cout << element << " ";
    }
    cout << endl;
    for(auto element: v2){
        cout << element << " ";
    }
}
