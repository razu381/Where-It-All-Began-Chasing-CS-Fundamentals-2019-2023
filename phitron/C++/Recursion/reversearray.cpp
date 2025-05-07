#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
void helpReverseArray(vector<int> &arr ,int start,int end){
    if(start >= end) {
        return;
    }
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    helpReverseArray(arr,start + 1,end-1);
}
void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
    int size = sizeof(arr) / sizeof(arr[0]);
    helpReverseArray(arr,m+1,size-1);
}


int main(){
    int t;
    cin >> t;
    for(int i = 0;i < t; i++){
        int n,m;
        cin >> n >> m;
        vector <int> v1;
        for(int i = 0;i < n; i++){
            int val;
            cin >> val;
            v1.push_back(val);
        }
        reverseArray(v1,m);
        for(int i = 0;i < n; i++) cout << v1.at(i) << " ";
        cout << endl;
    }


}
