#include<iostream>
#include<stack>
using namespace std;

class node{
    public:
    int data;
    node *right;
    node *left;

    node(int data){
        this->data = data;
        this->right = NULL;
        this->left = NULL;
    }
};

node* buildTree(node* root ){

    cout << "enter data" << endl;
    int data;
    cin >> data;

    root = new node(data);

    if(root->data == -1){
        return NULL;
    }

    cout << "insert data in left of data " << data << endl;
    root->left = buildTree(root->left);

    cout << "insert data in right of data " << data << endl;
    root->right = buildTree(root->right);
    return root;
}


void inorderTraversal(node* root){

    if(root == NULL){
        return;
    }

    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

void inorderWithoutRecur(node* root){

    node *curr = root;
    stack<node *> s;

    while(curr !=NULL || !s.empty()){

        if(curr != NULL){
            s.push(curr);
            curr = curr->left;
        }else{
            curr = s.top();
            s.pop();
            cout << curr->data << " ";
            curr = curr->right;
        }
    }
}

void preorderTraversal(node* root){
    if(root == NULL){
        return;
    }
    cout << root->data << " ";

    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void preorderWithoutRecur(node* root){

    node *curr = NULL;
    stack<node *> s;
    s.push(root);

    while (!s.empty()){
        curr = s.top();
        s.pop();

        cout << curr->data << " ";

        if(curr->right != NULL){
            s.push(curr->right);
        }

        if(curr->left != NULL)
            s.push(curr->left);
    }

}

void postOrderTraversal(node* root){
    stack<node *> stack1;
    stack<int> stack2;
    stack1.push(root);
    node *curr = NULL;

    while(!stack1.empty()){
        curr = stack1.top();
        stack1.pop();
        stack2.push(curr->data);

        if(curr->left != NULL){
            stack1.push(curr->left);
        }

        if(curr->right != NULL){
            stack1.push(curr->right);
        }
    }

    while(!stack2.empty()){
        int top = stack2.top();
        stack2.pop();
        cout << top << " ";
    }
}
int main(){
    node *root = NULL;
    
    root =  buildTree(root);
    // recursive approach
    cout << "traverse with recursion " << endl;
    inorderTraversal(root);
    cout << endl;
    //   8 8 8 8 8 -1 -1 -1 -1 -1 -1
    // 8 2 4 6 8 -1 -1-1
    
    // without recursion
    cout << "traverse without recursion " << endl;
    inorderWithoutRecur(root);

    cout << endl;

    cout << "preoder traversal using recursion " << endl;

    preorderTraversal(root);
    cout << endl;
    cout << "preorder traverse without recursion " << endl;
    preorderWithoutRecur(root);

    cout << endl;

    cout << "postorder traversal without recursion" << endl;
    postOrderTraversal(root);
}