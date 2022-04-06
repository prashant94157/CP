#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}

#define all(x) x.begin(),x.end()

#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 
static auto _ = [] ()
{ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();

int knapsack(ll n,vector<ll> arr,ll t)
{
    vector<vector<ll>> res(n+1,vector<ll> (t+1,-1));
    for(ll i=0;i<=n;i++)
    {
        for(ll j=0;j<=t;j++)
        {
            if(j==0)
            res[i][j] = 1;
            else if(i==0)
            res[i][j] = 0;
            else if(arr[i-1] <= j)
            {
                res[i][j] = res[i-1][j-arr[i-1]] || res[i-1][j];
            }
            else res[i][j] = res[i-1][j];
        }
    }
    for(auto a:res)
    {
        for(auto b:a)
        cout<<b<<" ";
        cout<<endl;
    }
    return res[n][t];
}

void fun()
{
    ll n,t;
    cin>>n;
    vector<ll> arr(n);
    for(auto &a:arr)
    cin>>a;
    cin>>t;
    cout<<knapsack(n, arr, t)<<endl;
}

//I/P
// 1
// 5
// 2 3 7 8 10
// 11
// O/P
// 1

int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        fun();    
    }
}