#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
  ll n;
  cin>>n;
  vector<ll> arr(n);
  for(auto &a:arr)
  cin>>a;    
  unordered_map<ll,ll> mp;
  ll res = n,i=-1,j=0;
  while(j<n)
  {
    while(mp[arr[j]]>0)
    {
      i++;
      mp[arr[i]] =0;
    }
    ll x = min(i+1,n-j-1), y =max(1+i,n-j-1);
    res = min(res,x*2 + y);
    mp[arr[j]]=1;
    j++;
  }
  cout<<res<<endl;
}

signed main()
{
  ll t;
  cin >> t;
  while (t--)
    solve();
}