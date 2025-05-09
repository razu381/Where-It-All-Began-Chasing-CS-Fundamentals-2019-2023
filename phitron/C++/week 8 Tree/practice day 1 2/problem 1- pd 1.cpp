
#include<bits/stdc++.h>
using namespace std;


class treeNode{
public:
   int data;
    treeNode* leftChild;
    treeNode* rightChild;
    treeNode(int val){
        data = val;
        leftChild = NULL;
        rightChild = NULL;
    }
};

void inorder(treeNode* root){
    if(root == NULL) return;

    inorder(root -> leftChild);

    cout << root -> data << " ";

    inorder(root -> rightChild);
}


int main(){
    int n;
    cin >> n;
    treeNode* allNodes[n];

    for(int i = 0; i < n; i++){
        allNodes[i] = new treeNode(-1);
    }

    for(int i = 0; i < n; i++){
        int val, left,right;
        cin >> val >> left >> right;
        allNodes[i] -> data = val;

        if(left != -1){
            allNodes[i] -> leftChild = allNodes[left];
        }
        if(right != -1){
            allNodes[i] -> rightChild = allNodes[right];
        }
    }

    inorder(allNodes[0]);
}//end of main function
