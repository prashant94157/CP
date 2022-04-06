#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>> arr(n,vector<ll> (m));
    for(auto &a:arr)
    {
        for(auto &b:a)
        cin>>b;
    }
    ll res=0;
    for(size_t i=m-2;i>=0;i--)
    {
        for(size_t j=0;j<n;j++)
        {
            ll a=0,b=0,c=0;
            if(j>0)
            a=arr[i-1][j-1];
            if(j+1<n)
            c=arr[i-1][j+1];
            b=arr[i-1][j];
            arr[i][j]+=max(a,max(b,c));
            cout<<arr[i][j]<<" ";
        }
    }
    for(size_t i=0;i<n;i++)
    res=max(res,arr[i][0]);
    cout<<res<<endl;

}