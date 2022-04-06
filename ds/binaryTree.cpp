#include <bits/stdc++.h>
using namespace std;

class node{
public:
int d;
node  *left,*right;
node(int x)
{
    d=x;
}
};

node *create()
{
    int x;
    cout<<" node ";
    cin>>x;
    if(x==-1)
    return NULL;
    node *newnode = new node(x);
    cout<<"left of "<<x;
    newnode->left = create();
    cout<<"right of "<<x;
    newnode->right = create();
    return newnode;
}

void display(node *root)
{
    if(root==NULL)
    {
        cout<<" -1"<<endl;
        return;
    }
    cout<<" "<<root->d<<endl;
    cout<<"left of "<<root->d;
    display(root->left);
    cout<<"right of "<<root->d;
    display(root->right);
}

void infix(node *root)
{
    if(root==NULL)
    return;
    infix(root->left);
    cout<<root->d<<" ";
    infix(root->right);
}

void prefix(node *root)
{
    if(root==NULL)
    return;
    cout<<root->d<<" ";
    prefix(root->left);
    prefix(root->right);
}

void postfix(node *root)
{
    if(root==NULL)
    return;
    postfix(root->left);
    postfix(root->right);
    cout<<root->d<<" ";
}

int main()
{
node *root;
root = create();
cout<<"\n\n\n\nDISPLAY"<<endl;
display(root);
cout<<"\n\n\n\nINFIX"<<endl;
infix(root);
cout<<"\n\n\n\nPREFIX"<<endl;
prefix(root);
cout<<"\n\n\n\nDISPLAY"<<endl;
postfix(root);
return 0;
}
