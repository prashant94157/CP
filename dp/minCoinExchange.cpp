#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll fun(ll n,vector<ll> &arr)
{
    if(arr[n]!=-2)
    return arr[n];
    if(n==0)
    {
        arr[n]=0;
        return arr[n];
    }
    arr[n]=fun(n-1,arr);
    if(n-7>=0)
    arr[n]=min(arr[n],fun(n-7,arr));
    if(n-10>=0)
    arr[n]=min(arr[n],fun(n-10,arr));
    arr[n]++;
    return arr[n];
}

int main()
{
    ll n;cin>>n;
    vector<ll> arr(n+1,-2);
    cout<<fun(n,arr)<<endl;
}