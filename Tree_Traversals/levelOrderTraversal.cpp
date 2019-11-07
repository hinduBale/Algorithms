#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;
};

node* create(int num)
{
    node* temp = new node;
    temp -> data = num;
    temp -> right = NULL;
    temp -> left = NULL;
    return temp;
}
void printNodes(node* root)
{
    if (root == NULL)
        return;
//    if(level > maxl)
//    {
//        cout << root -> data << " ";
//        maxl = level;
//    }
    queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
        node* f = q.front();
        q.pop();
        cout << f -> data << " ";

        if(f -> left != NULL)
            q.push(f -> left);

        if(f -> right != NULL)
            q.push(f -> right);
    }
}


int main()
{
    node* root = create(1);
    root -> left = create(2);
    root -> right = create(3);
    root -> left -> right = create(4);
    root -> right -> left = create(5);

    printNodes(root);
    return 0;
}
