#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void print(stack<ll> s)
{
    while(s.size()>0)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

void Insert(stack<ll> &s,ll temp)
{
    if(s.size()==0)
    {
        s.push(temp);
        return;
    }
    if(s.top()>=temp)
    {
        s.push(temp);
    }
    else
    {
        ll v = s.top();
        s.pop();
        Insert(s,temp);
        s.push(v);
    }
}

void Sort(stack<ll> &s)
{
    if(s.size()==1)
    {
        return;
    }
    ll temp = s.top();
    s.pop();
    Sort(s);
    Insert(s,temp);
}

int main()
{
    ll n,a;
    cin>>n;
    stack<ll> s;
    for(ll i=0;i<n;i++)
    {
        cin>>a;
        s.push(a);
    }
    print(s);
    Sort(s);
    print(s);    
}