#include <bits/stdc++.h>
//#include<random>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<ll,ll> pll;
typedef pair<int, int> pii;
typedef map<ll, ll> mll;
const int MOD1=1e9+7;
const int MOD2=998244353;
const int iINF=INT_MAX;
const ll INF=LLONG_MAX;
const ld PI=3.14159265358979323846;
ll gcd(ll a,ll b){if(b==0) return a; return gcd(b,a%b);}
ll fpow(ll a,ll b,ll m) {
    if(!b) return 1;
    ll ans=fpow(a*a%m,b/2,m);
    return (b%2?ans*a%m:ans);
}
ll inv(ll a,ll m) {return fpow(a,m-2,m);}
#define IOS ios::sync_with_stdio(false);cin.tie(0);
#define rep(i,n) for(ll i=0;i<n;i++)
#define rep1(i,n) for(ll i=1;i<=n;i++)
#define repk(i,m,n) for(int i=m;i<=n;i++)
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define pow2(a) (1LL<<a)
#define LB(a,x) (lower_bound(a.begin(),a.end(),x))
#define UB(a,x) (upper_bound(a.begin(),a.end(),x))
#define fixset(ans, n) fixed<<setprecision(n)<<(ld)ans<<endl
 
void solve() {
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(auto &i:arr)
      cin>>i;

    stack<pair<int,int>> s;
    vector<int> v;
    for(auto a:arr)
    {
        if(s.size()==0)
        {
            v.push_back(1);
            s.push({a,1});
        }
        else if(s.top().first == a)
        {
            s.top().second++;
            v.push_back(s.top().second);
        }
        else if(s.top().first > a)
        {
            // s.push({a,1});
            v.push_back(1);
            s.push({a,1});
        }
        else{
            int b=1;
            while(s.size() && s.top().first <= a)
            {
                b += s.top().second;
                s.pop();
            }
            v.push_back(b);
            s.push({a,b});
        }
    }
    for(auto i:v)
      cout<<i<<" ";
    cout<<endl;
    return;
}
signed main() {
    IOS
    int t;
    cin>>t;
    while(t--) solve();
}