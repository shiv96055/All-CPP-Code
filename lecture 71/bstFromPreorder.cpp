#include<bits/stdc++.h>
using namespace std;

class node{
    public :
        int data;
        node *left;
        node *right;

        node(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};
node* insertInBST(node* root, int data){

    if(root == NULL){
        root = new node(data);
        return root;
    }

    if(data >root -> data){
        root->right = insertInBST(root->right, data);
    }else{

        root->left = insertInBST(root->left, data);
    }
    return root;
}
void takeInput(vector<int> &pre, node* &root){

    // cout << "enter data in BST " << endl;
    // int data;
    // cin >> data;
    int i = 0;
    while(i<pre.size()){
        root = insertInBST(root, pre[i]);
        i++;
    }
}


void printInorder(node* root){

    if(root == NULL)
        return;

    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

void printPreorder(node* root){
    if(root == NULL)
        return ;

    cout << root->data << " ";
    printPreorder(root->left);
    printPreorder(root -> right);
}
int main(){

    vector<int> preorder = {20, 10, 5, 15, 13, 35, 30, 42};
    node *root = NULL;
    takeInput(preorder, root);
    //root = preorderToBST(preorder);
    cout << "inorder of BST" << endl;
    printInorder(root);
    cout << endl << "preorder of BST" << endl;
    printPreorder(root);

    return 0;
}