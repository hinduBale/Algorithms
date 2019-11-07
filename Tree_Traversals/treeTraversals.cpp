#include <bits/stdc++.h>

using namespace std;

//PreOrder -> Root, Left and then Right Subtree
//Inorder -> Left, Root and then RightSubtree
//PostOrder -> Left, Right and then Root

struct node{
    int data;
    struct node* left;
    struct node* right;
};

node* create(int num)
{
    node* temp = new node;
    temp -> data = num;
    temp -> left = NULL;
    temp -> right = NULL;
}

void preOrder(node* temp)
{
    if(temp == NULL)
        return;
    cout << temp -> data << " ";
    preOrder(temp -> left);
    preOrder(temp -> right);
}

void inOrder(node* temp)
{
    if(temp == NULL)
        return;
    inOrder(temp -> left);
    cout << temp -> data << " ";
    inOrder(temp -> right);
}

void postOrder(node* temp)
{
    if(temp == NULL)
        return;
    postOrder(temp -> left);
    postOrder(temp -> right);
    cout << temp -> data << " ";
}

int main()
{
    node* root = create(1);
    root -> left = create(2);
    root -> right = create(3);
    root -> left -> left = create(4);
    root -> left -> right = create(5);

//    preOrder(root);
//    cout << endl;
//    inOrder(root);
//    cout << endl;
//    postOrder(root);
    cout << 'z' - 'a' << endl;

    return 0;
}
