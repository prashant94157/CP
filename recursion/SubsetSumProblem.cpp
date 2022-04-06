#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool fun(vector<ll> arr,ll target,ll i=0)
{
    if(target==0)
    return 1;
    if(target<0)
    return 0;
    if(i==arr.size())
    return 0;
    return fun(arr,target-arr[i],i+1) || fun(arr,target,i+1);
}

int main()
{
    ll n,target;
    cin>>n;
    vector<ll> arr(n);
    for(auto &a:arr)
    cin>>a;
    cin>>target;
    cout<<fun(arr,target)<<endl;
}