#include<bits/stdc++.h>
using namespace std;

class treeNode{
public:
    int data;
    treeNode* left;
    treeNode* right;

    treeNode(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int main(){
    int n;
    cin >> n;
    treeNode* allNodes[n];

    for(int i = 0; i < n; i++) allNodes[i] -> data = -1;

    for(int i = 0; i < n ;i++){
        int data, left, right;
        cin >> data >> left >> right;
        allNodes[i] -> data = data;
        if(left != -1) allNodes[i] -> left = left;
        if(right != -1) allNodes[i] -> right = right;
    }
}
