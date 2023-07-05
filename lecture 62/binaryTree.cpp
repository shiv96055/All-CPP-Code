#include<iostream>
#include<queue>
using namespace std;
 
 class node{
     public :
     int data;
     node *right;
     node *left;

     node(int data){
         this->data = data;
         this->right = NULL;
         this->left = NULL;
     }
 };

 node* buildTree(node* root){
     cout << "enter data " << endl;
     int data;
     cin >> data;
     root = new node(data);

     if(root->data == -1){
         return NULL;
     }
     cout << "enter data for inserting in left of " << data << endl;
     root->left = buildTree(root->left);

     cout << "enter data for inserting in right of " << data << endl;
     root->right = buildTree(root->right);
     return root;
 }
 void levelOrderTraversal(node *root){
     queue<node*> q;
     q.push(root);
     q.push(NULL);

     while(!q.empty()){
     node *temp = q.front();
     q.pop();
     if(temp == NULL){
         cout << endl;
         if(!q.empty()){
             q.push(NULL);
         }
     }else{
     cout << temp->data << " ";
     if(temp->left){
         q.push(temp->left);
     }
      if(temp->right){
         q.push(temp->right);
      }
     }
    }

 }

 void inorderTraversal(node* root){

     if(root == NULL){
         return;
     }
     // left jao 
     inorderTraversal(root->left);
     
     // node print krdo 
     cout << root->data <<" ";

     // right jao 
     inorderTraversal(root->right);
 }

 void preorderTraversal(node* root){

     // base case 
     if(root == NULL){
         return;
     }

     // N ->  node print krdo
     cout << root->data << " ";
    // L -> left m jao 
     preorderTraversal(root->left);
   
    // R -> right m jao
     preorderTraversal(root->right);
 }

void postOrderTraversal(node* root){

    // base case 
    if(root == NULL){
        return;
    }

    // L -> left m jao
    postOrderTraversal(root->left);

    // R -> right m jao

    postOrderTraversal(root->right);
    
    // N -> Node print krdo
    cout << root->data << " ";
}

void buildFromLevelOrder(node* &root){

    cout << "enter data for root " << endl;
    int data;
    cin >> data;
    root = new node(data);

    queue<node* > q;
    q.push(root);

    while(!q.empty()){

        node *temp = q.front();
        q.pop();

        cout << "enter data for left of root " << temp->data<< endl;
        int leftData;
        cin >> leftData;

        if(leftData != -1){
        temp->left = new node(leftData);
        q.push(leftNode);
        }

        cout << "enter data for right of root " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1) {  
       temp->right = new node(rightData);
        q.push(rightNode);
          }
    }
}
 int main(){
     node *root = NULL;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1

     buildFromLevelOrder(root);
     levelOrderTraversal(root);
     inorderTraversal(root);

     /*
     root = buildTree(root);
     cout << root->data << endl;
     levelOrderTraversal(root);

     cout << "inorder trav is : ";
     inorderTraversal(root);
     cout << endl
          << "trverse in preorder is : ";
     preorderTraversal(root);
     cout <<endl<<"traverse in postorder : ";
     postOrderTraversal(root);
     */
 }
        

 