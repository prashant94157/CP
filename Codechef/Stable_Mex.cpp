#include <bits/stdc++.h>
//#include<random>
using namespace std;
typedef long long ll;
typedef long double ld;
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll fpow(ll a, ll b, ll m)
{
    if (!b)
        return 1;
    ll ans = fpow(a * a % m, b / 2, m);
    return (b % 2 ? ans * a % m : ans);
}
ll inv(ll a, ll m) { return fpow(a, m - 2, m); }
#define IOS                      \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define mp make_pair
#define pow2(a) (1LL << a)
#define LB(a, x) (lower_bound(a.begin(), a.end(), x))
#define UB(a, x) (upper_bound(a.begin(), a.end(), x))
#define fixset(ans, n) fixed << setprecision(n) << (ld)ans << endl
#define mod 1000000007
#define all(x) x.begin(),x.end()
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define pll pair<long long,long long>
#define sll set<long long>
#define mll map<long long,long long>
#define vll vector<long long>
#define vbool vector<bool>
#define vpll vector<pair<long long,long long>>
#define vvll vector<vector<long long>>
#define sortall(arr) sort(arr.begin(),arr.end())
#define sortg(arr) sort(arr.begin(),arr.end(), greater<long long>())
#define modadd(a,b) (a%mod + b%mod)%mod
#define modsub(a,b) (a%mod - b%mod)%mod
#define modmul(a,b) (a%mod * b%mod)%mod
#define PI 3.14159265
#define endl "\n" 
#define REP(n) for(int i=0;i<n;i++)
#define REP1(n) for(int i=1;i<n;i++)
#define REPr(n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(i=0;i<n;i++)
#define repr(i,n) for(i=n-1;i>=0;i--)
#define maxx(arr) *(max_element(all(arr)))
#define minn(arr) *(min_element(all(arr)))
#define FILL(n,arr) for(int i=0;i<n;i++){ll x;cin>>x;arr.pb(x);}
#define print(arr) {for(int i=0;i<arr.size();i++){cout<<arr[i]<<" ";}cout<<endl;}
#define deb(x) cout<<" --> "<<(#x)<<" : "<<x<<endl;
#define deb2(x, y) cout<<" --> "<<(#x)<<" : "<<x<<" , "<<(#y)<<" : "<<y<<endl;

ll calc_mex(vll &v)
{
  ll ans = v.size();
  ll n = v.size();
  for (ll i = 0; i < n; i++)
  {
    if (v[i] != i)
      return i;
  }
  return ans;
}

void solve()
{
  ll n,z=0,f=0,l=-1,x=0;
  cin>>n;
  vll arr;
  FILL(n,arr);    
  sort(arr.begin(), arr.end());
  arr.erase(unique(arr.begin(),arr.end()),arr.end());
  ll mex = calc_mex(arr);
  if (mex == 0)
  {
    cout << (arr[0] - 1) << endl;
    return;
  }
  if (mex == 1)
  {
    cout << -1 << endl;
    return;
  }
  ll ans = 0;
  n = arr.size();
  for (ll i = 0; i < n;)
  {
    ll cnt = 1;
    ll j = i + 1;
    while (j < n && arr[j] - arr[j - 1] == 1)
      ++cnt, j++;
    if (cnt >= (mex - 1))
      ++ans;
    i = j;
  }
  --ans;
  cout << ans << endl;
}

signed main()
{
    IOS ll t;
    cin >> t;
    while (t--)
        solve();
}