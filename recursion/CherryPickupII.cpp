#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll fun(vector<vector<ll>> arr,ll r1,ll c1,ll r2,ll c2,ll a,ll b)
{
    
}

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
    cout<<fun(arr,0,0,0,m-1,0,0)<<endl;
}