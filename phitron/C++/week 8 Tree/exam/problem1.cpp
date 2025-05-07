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

void print_levelorder(treeNode* root){
    if(root  == NULL) return;
    queue <treeNode*> qt;
    qt.push(root);
    qt.push(NULL);
    stack <treeNode*> st;
    while(!qt.empty()){
        treeNode* chkNode = qt.front();

        qt.pop();


        if(chkNode != NULL){
            st.push(chkNode);
           // cout << chkNode -> data << " ";
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

    while(!st.empty()) {
        cout << st.top() -> data;
        st.top();
    }

}

//change this change this treeNode to Node


bool are_identical(treeNode* root1,treeNode* root2) {
  if (root1 != NULL && root2 != NULL) {
  cout << "Root 1 = " << root1 -> data << " , " << "Root 2 = " << root2 -> data << endl;
  }
  if (root1 == NULL && root2 == NULL) {
    cout << "True" << endl;
    return true;
  }

  if (root1 != NULL && root2 != NULL) {
    return ((root1->data == root2->data) &&
            are_identical(root1->leftChild, root2->leftChild) &&
            are_identical(root1->rightChild, root2->rightChild));
  }

  return false;
}


int main(){
    treeNode* root1 = new treeNode(3);
    root1 ->leftChild = new treeNode(9);
    root1 ->rightChild = new treeNode(20);
    root1 -> rightChild -> leftChild = new treeNode(15);
    root1 -> rightChild -> rightChild = new treeNode(7);


    treeNode* root2 = new treeNode(1);
    root2 ->leftChild = new treeNode(2);
    //root2 ->rightChild = new treeNode(2);

    print_levelorder(root1);cout << endl;
//    print_levelorder(root2);cout << endl;


}
