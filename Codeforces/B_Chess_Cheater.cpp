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
#define rep(i,n) for(int i=0;i<n;i++)
#define repr(i,n) for(int i=n-1;i>=0;i--)
#define maxx(arr) *(max_element(all(arr)))
#define minn(arr) *(min_element(all(arr)))
#define FILL(n,arr) for(int i=0;i<n;i++){ll x;cin>>x;arr.pb(x);}
#define FILL1(n,m,arr) for(int j=0;j<n;j++){vll a; FILL(m,a);arr.pb(a);}
#define print(arr) {for(int i=0;i<arr.size();i++){cout<<arr[i]<<" ";}cout<<endl;}
#define print1(arr) {for(int j=0;j<arr.size();j++) print(arr[j]);}
#define deb(x) cout<<" --> "<<(#x)<<" : "<<x<<endl;
#define deb2(x, y) cout<<" --> "<<(#x)<<" : "<<x<<" , "<<(#y)<<" : "<<y<<endl;

void solve()
{
  ll n,k,c=0,res=0,x=0,y=0;
  cin>>n>>k;
  string s;
  cin>>s;
  vll w,l;
  for(auto a:s)
  {
    if(c==0)
    {
      if(a=='W')
      c++;
      else c--;
    }
    else if(a=='W')
    {
      if(c>0)
      c++;
      else 
      {
        l.pb(-c);
        c=1;
      }
    }
    else{
      if(c<0)
      c--;
      else 
      {
        w.pb(c);
        c=-1;
      }
    }
  }

  if(c>0)
  w.pb(c);
  else l.pb(-c);

  // print(w);
  // 
  // print(l);
  for(auto a:w)
  res+=(a*2-1);
  
  if(s[0]=='L')
  {
    x = l[0];
    l.erase(l.begin());
  }

  if(s[n-1]=='L')
  {
    y = l[l.size()-1];
    l.pop_back();
  }
  sortall(l);
  // print(l);
  // print(l);
  REP(l.size())
  {
    if(l[i]<=k)
    {
      res+=l[i]*2+1;
      k-=l[i];
    }
    else
    {
      res+=k*2;
      k=0;break;
    }
  }
  // deb2(x,y);
  if(k>0 && y!=0)
  {
    if(y<=k)
    {
      res+=y*2;
      k-=y;
    }
    else
    {
      res+=k*2;
      k=0;
    }
  }
  if(k>0 && x!=0)
  {
    if(x<=k)
    {
      res+=x*2;
      k-=x;
    }
    else
    {
      res+=k*2;
      k=0;
    }
  }
  // cout<<"res:"<<res<<endl;
  cout<<res<<endl;
}

signed main()
{
  IOS ll t;
  cin >> t;
  while (t--)
    solve();
}