#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void print(vector<ll> arr)
{
    for(auto a:arr)
    cout<<a<<" ";
    cout<<endl;
}

void Insert(vector<ll> &arr,ll temp)
{
    if(arr.size()==0)
    {
        arr.push_back(temp);
        return;
    }
    if(arr[arr.size()-1]<=temp)
    {
        arr.push_back(temp);
    }
    else
    {
        ll v = arr[arr.size()-1];
        arr.pop_back();
        Insert(arr,temp);
        arr.push_back(v);
    }
}

void Sort(vector<ll> &arr)
{
    if(arr.size()==1)
    {
        return;
    }
    ll temp = arr[arr.size()-1];
    arr.pop_back();
    Sort(arr);
    Insert(arr,temp);
}

int main()
{
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(auto &a:arr)
    {
        cin>>a;
    }
    print(arr);
    Sort(arr);
    print(arr);    
}