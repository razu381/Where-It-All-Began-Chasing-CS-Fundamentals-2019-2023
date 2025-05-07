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

void space_print(int level){
    for(int i = 0; i < level; i++) cout << "   ";
}

void printTree(treeNode* root, int level){
    if(root == NULL) return ;
    if(root -> leftChild == NULL && root -> rightChild == NULL){
        cout << root -> data << endl;
        return;
    }else{
        cout << endl;
        space_print(level);
        cout<< "Root: " << root -> data <<  endl;
    }

    if(root -> leftChild != NULL){
        space_print(level);
        cout <<"Left: ";
        printTree(root -> leftChild, level+1);
    }
    if(root -> rightChild != NULL){
        space_print(level);
        cout <<"right: ";
        printTree(root -> rightChild, level+1);
    }
}



void print_preorder(treeNode* node){
    if(node == NULL) return ;

    cout << node -> data << " ";

    print_preorder(node -> leftChild);

    print_preorder(node -> rightChild);

}
//inorder
void print_inorder(treeNode* node){
    if(node == NULL) return ;

    print_inorder(node -> leftChild);

    cout << node -> data << " ";

    print_inorder(node -> rightChild);

}

//postorder
void print_postorder(treeNode* node){
    if(node == NULL) return ;

    print_postorder(node -> leftChild);

    print_postorder(node -> rightChild);

    cout << node -> data << " ";

}

//Level wise print

void print_levelorder(treeNode* root){
    if(root  == NULL) return;
    queue <treeNode*> qt;
    qt.push(root);
    qt.push(NULL);

    while(!qt.empty()){
        treeNode* chkNode = qt.front();
        qt.pop();

        if(chkNode != NULL){
            cout << chkNode -> data << " ";
            if(chkNode -> leftChild != NULL){
                qt.push(chkNode -> leftChild);
            }
            if(chkNode -> rightChild != NULL){
                qt.push(chkNode -> rightChild);
            }
        }else{
            if(!qt.empty()){
                qt.push(NULL);
            }
        }
    }
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

//    print_preorder(allNodes[0]);
//    cout << endl;
//    print_inorder(allNodes[0]);
//    cout << endl;
//    print_postorder(allNodes[0]);

      print_levelorder(allNodes[0]);

}//end of main function
