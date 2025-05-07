#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node* left;
    node* right;

    node(int value)
    {
        val = value;
        left = NULL;
        right = NULL;
    }
};

void print_node(node* root)
{
    if(root == NULL) return;

    print_node(root -> left);
    cout << root -> val << " ";
    print_node(root -> right);
}

node* get_input()
{
    queue <node*> qt;
    int root;
    cin >> root;
    node* root_node = new node(root);
    qt.push(root_node);

    while(!qt.empty())
    {
        node* chk_node = qt.front();
        qt.pop();
        int left, right;
        cin >>  left >> right;

        if(left != -1)
        {
            chk_node -> left = new node(left);
            qt.push(chk_node -> left);
        }
        if(right != -1)
        {
            chk_node -> right = new node (right);
            qt.push(chk_node -> right);
        }
    }
    return root_node;
}


void print_level_order(node* root){
    queue <node*> qt;
    qt.push(root);

    while(!qt.empty()){
        node* chk_node = qt.front();
        qt.pop();
        cout << chk_node -> val << " ";

        if(chk_node -> left != NULL){
            qt.push(chk_node -> left);
        }
        if(chk_node -> right != NULL){
            qt.push(chk_node -> right);
        }
    }
}

void print_kth_node(node* root,int k){
    static int counter = 0;
    if(root == NULL) return;
    print_kth_node(root -> left,k);//////////////

    print_kth_node(root -> right, k);
    counter++;
    if(counter == k) cout << root -> val;
}

void print_leaf(node* root){
    if(root == NULL) return;
    print_leaf(root -> left);
    if(root -> left == NULL) cout << root -> val;
    if(root -> right == NULL) cout  << root -> val;


    print_leaf(root -> right);
}

int main()
{
    int n;
    cin >> n;
    node* root = get_input();
    //print_level_order(root);
    print_leaf(root);
}
