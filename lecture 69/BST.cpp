#include<iostream>
#include<bits/stdc++.h>

using namespace std ;

struct Node{
   // public:
   int data;
    Node *left;
    Node *right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
        
    }
};

Node* insertInBST(Node* root, int data){

    if(root == NULL){
        root = new Node(data);
        return root;
    }

    if(data > root -> data){
        // right part minsert krdo;
        root->right = insertInBST(root->right, data);
    }else{
        // insert in root k left m
        root->left = insertInBST(root->left, data);
    }

    return root;
}


void takeInput(Node* &root){

    cout << "enter data in BST " << endl;
    int data;
    cin >> data;
    while(data != -1){
       root = insertInBST(root, data);
        cin >> data;
    }
}

void inorderTraversal(Node* root){

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

 void preorderTraversal(Node* root){

     if(root == NULL)
         return;

     cout << root->data << " ";

     preorderTraversal(root->left);

     preorderTraversal(root->right);
 }

 void postorderTraversal(Node* root){

     if(root == NULL)
         return;

     postorderTraversal(root->left);
     postorderTraversal(root->right);
     cout << root->data << " ";
 }

 void lavelOrderTraversal(Node* root){

     queue<Node*> q;

     q.push(root);
     q.push(NULL);

     while(!q.empty()){

         Node *front = q.front();
         q.pop();
           
            if(front == NULL){

                cout << endl;

                if(!q.empty())
                    q.push(NULL);
            }else{

                cout << front->data << " ";
            
         if(front->left != NULL)
             q.push(front->left);

             if(front ->right != NULL)
                 q.push(front->right);
            }

     }
 }

 Node* maxValue(Node* root){

     Node *temp = root;

     while(temp-> right != NULL){
         temp = temp->right;
     }

     return temp;
 }

 
 Node* minValue(Node* root){

     Node *temp = root;

     while(temp->left != NULL)
         temp = temp->left;

     return temp;
 }

 Node* deleteFromBST(Node* root, int data){

      if(root == NULL)
          return NULL;

        if(root ->data == data){
          // 0 child

          if(root ->left == NULL && root ->right == NULL){
              delete root;
              return NULL;
          }

          // 1 child 

            if(root ->left != NULL && root ->right ==NULL){

                Node *temp = root->left;
                delete root;
                return temp;
            }

            if(root -> left == NULL && root ->right != NULL){

                Node *temp = root->right;
                delete root;
                return temp;
            }

          // 2 child 

          if(root -> left != NULL && root -> right != NULL ){

              root->data = minValue(root->right)->data;

              root = deleteFromBST(root ->right, root->data);
              return root;
          }
          
        }else if(root->data > data){

            root->left = deleteFromBST(root->left, data);
            return root;
        }else{
            root->right = deleteFromBST(root->right, data);
            return root;
        }
        return root;
  }
int main(){
    
    Node *root = NULL;
    takeInput(root);

    cout << "Inorder Traversal " << endl;
    inorderTraversal(root);
    cout << endl;

    cout << "Preoerderd Treversal " << endl;
    preorderTraversal(root);

    cout << endl
         << "Postorder Traversal" << endl;
    postorderTraversal(root);

    cout << endl
         << "Lavel Order Traversal "<< endl;

    lavelOrderTraversal(root);

    cout << endl;

    Node *max = maxValue(root);
    cout << "maximum value is " << max->data << endl;

    Node *min = minValue(root);
    cout << " min value is " << min->data << endl;

   root =  deleteFromBST(root, 70);

    cout << "Inorder Traversal " << endl;
    inorderTraversal(root);
    cout << endl;

      cout << "Preoerderd Treversal " << endl;
    preorderTraversal(root);

    cout << endl
         << "Postorder Traversal" << endl;
    postorderTraversal(root);

    cout << endl
         << "Lavel Order Traversal "<< endl;

    lavelOrderTraversal(root);

    cout << endl;

    max = maxValue(root);
    cout << "maximum value is " << max->data << endl;

    min = minValue(root);
    cout << " min value is " << min->data << endl;
    

    return 0;
}