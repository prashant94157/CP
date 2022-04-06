#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Node
{
    ll val,index;
    Node* left;
    Node* right;
    Node* priority;
    Node(ll v,ll in)
    {
        val=v;
        index=in;
        right=NULL;
        left=NULL;
        priority=NULL;
    }
};

void insert(ll a,Node* root,ll in)
{
    
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll a,in=0;
        cin>>a;
        Node* root = new Node(a,in);
        n--;
        while(n--)
        {
            cin>>a;
            in++;
            insert(a,root,in);
        }
    }
}