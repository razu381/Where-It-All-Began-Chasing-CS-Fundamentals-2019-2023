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

void print_space(int level){
    for(int i = 0; i < level; i++) cout << "   ";
}

void printTree(node* root,int level){
    if(root == NULL) return;

    if(root -> leftChild == NULL && root -> rightChild == NULL){
        cout << root -> data << endl;
        return;
    }else{
        cout << endl;
        print_space(level);
        cout << "Root: "  << root -> data <<  endl;
    }

    if(root -> leftChild != NULL){
        print_space(level);
        cout << "left: ";
        printTree(root -> leftChild, level + 1);
    }

    if(root -> rightChild != NULL){
        print_space(level);
        cout << "Right: ";
        printTree(root -> rightChild,level+1);
    }
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
    printTree(allNodes[0],0);

//    cout << allNodes[0] -> data << endl;
//    cout << allNodes[0] -> leftChild -> data << endl;
//    cout << allNodes[0] -> rightChild -> rightChild -> data << endl;
}
