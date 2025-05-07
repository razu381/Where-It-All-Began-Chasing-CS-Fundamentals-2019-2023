#include<bits/stdc++.h>
using namespace std;


class node{
public:
    int data;
    node* leftChild;
    node* rightChild;
    node(int val){
        data = val;
        leftChild = NULL;
        rightChild = NULL;
    }
};

void inorder_traversal(node* root, string &s){
    if(root == NULL) return;
    inorder_traversal(root -> leftChild,s);
    s += to_string(root ->data);
    inorder_traversal(root -> rightChild,s);
}


void preorder_traversal(node* root, string &s){
    if(root == NULL) return;
    s += to_string(root ->data);

    preorder_traversal(root -> leftChild,s);

    preorder_traversal(root -> rightChild,s);
}

void postorder_traversal(node* root, string &s){
    if(root == NULL) return;

    postorder_traversal(root -> leftChild,s);

    postorder_traversal(root -> rightChild,s);

    s += to_string(root ->data);
}


int main(){
    int n;
    cin >> n;
    node* allNodes[n];

    for(int i = 0; i < n; i++){
        allNodes[i] = new node(-1);
    }

    for(int i = 0; i < n; i++){
        int val, left, right;
        cin >> val >> left >> right;

        allNodes[i] -> data = val;

        if(left != -1) allNodes[i] -> leftChild = allNodes[left];
        if(right != -1) allNodes[i] -> rightChild = allNodes[right];
    }
    string inorder = "";
    inorder_traversal(allNodes[0],inorder);
    cout << " inorder: " << inorder << endl;

    string postorder = "";
    postorder_traversal(allNodes[0],postorder);
    cout << " postorder: " << postorder << endl;

    string preorder = "";
    preorder_traversal(allNodes[0],preorder);
    cout << " preorder: "<< preorder << endl;
}
