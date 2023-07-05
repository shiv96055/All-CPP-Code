#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

int findIndex(int *In, int num, int s, int n)
{

    for (int i = s; i <= n; i++)
    {
        if (In[i] == num)
            return i;
    }

    return -1;
}

node *solve(int *in, int *pr, int index, int startInorder, int endInorder, int n)
{

    // base case
    if (index >= n || startInorder > endInorder)
        return NULL :

            node *
            root = new node(Pr[index]);

    int ind = findIndex(In, Pr[index], startInorder, endInorder);

    root->left = solve(In, Pr, index++, startInorder, ind - 1);
    root->right = solve(In, Pr, index++, ind + 1, endInorder);

    return root;
}

node *buildTree(int *In, int *Pr int n)
{
    int preOrderIndex = 0;

    node *root = solve(In, Pr, preOrderIndex, 0, n - 1, n);
    return root;
}

void printPreorder(node *root)
{

    if (root == NULL)
        return;

    cout << root->data << " ";

    printPreorder(root->left);
    printPreorder(root->right);
}
int main()
{

    int In[7] = {9, 7, 10, 5, 11, 8, 12};
    int Pr[7] = {5, 7, 9, 10, 8, 11, 12};

    node *root = solve(In, Pr, 0, 6);

    printPreorder(root);
    return 0;
}