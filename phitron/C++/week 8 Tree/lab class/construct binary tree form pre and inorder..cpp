
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


int search_inorder(int in_order[],int current, int start, int end){
    for(int i = start; i < end; i++){
        if(in_order[i] == current) return i;
    }

}

treeNode* construct_bin_tree(int pre_order[], int in_order[],int start, int end){
    cout << "Start = " << start << endl;
    cout << "End = " << end << endl;
    static int id = 0;
    cout << "ID = " << id << endl;
    int current = pre_order[id];
    cout << "Current = " << current << endl;
    id++;
    treeNode* new_node = new treeNode(current);

    if(start == end) {
        cout << endl;
        return new_node;
    }

    int pos =  search_inorder(in_order,current, start,end);
    cout << "pos = " << pos << endl << endl;
    new_node -> leftChild = construct_bin_tree(pre_order,in_order,start,pos - 1);
    new_node -> rightChild = construct_bin_tree(pre_order,in_order,pos+1,end);
    return new_node;
}

int main(){
    int n;
    cin >> n;
    //preorder
    int pre_order[n];
    for(int i = 0; i < n; i++){
        cin >> pre_order[i];
    }

    //inorder
    int in_order[n];
    for(int i = 0; i < n; i++){
        cin >> in_order[i];
    }

    treeNode* root = construct_bin_tree(pre_order,in_order,0,n-1);
    print_preorder(root);


}//end of main function
