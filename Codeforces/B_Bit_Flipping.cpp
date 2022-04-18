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
#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {cerr << *it << " = " << a << endl;err(++it, args...);}

void func(vll &op, ll i, ll j)
{
  while(i<=j)
  {
    op[i++]++;
  }
}

void solve()
{
  ll n,k,i=0,j;
  cin>>n>>k;
  string s;
  cin>>s;
  vll op(n,0);
  if(k==0)
  {
    cout<<s<<endl;
    print(op);return;
  }
  
  if(k%2==1)
  {
    while(i<n && s[i]=='0')
    i++;
    j=i;
    REP(n)
    {
      if(i!=j)
      {
        if(s[i]=='0')
        s[i] = '1';
        else s[i] ='0';
      }
    }
    if(i==n)
    {
      s[n-1] = '0';
      op[n-1]=k;
      cout<<s<<endl;
      print(op);return;
    }
    op[i]++;
    k--;
  }
  ll l=-1;
  for(i=0;i<n && k>0;i++)
  {
    if(s[i]=='0')
    {
      if(l==-1)
      l=i;
      else {
        s[l] = '1';
        s[i] = '1';
        k-=2;
        
        op[i]++;
        op[l]++;
        l=-1;
      }
    }  
  }
  if(l!=-1)
  {
    //01
    if(l+1!=n)
    {
      s[l] = '1';
      s[n-1] = '0';
      k-=2;
      op[l]++;
      op[n-1]++;
    }
  }
  if(k>0)
  {
    op[0]+=k;
  }
  cout<<s<<endl;
  print(op);return;
  
}

signed main()
{
  IOS ll t;
  cin >> t;
  while (t--)
    solve();
}