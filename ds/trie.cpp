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

struct Trie{
    Trie *child[26];
    bool isEnd;
    Trie()
    {
        isEnd = false;
        for(int i=0;i<26;i++)
        {
            child[i] = NULL;
        }
    }
}*root;

void insertNode(string s)
{
    Trie* curr = root;
    for(int i=0;i<s.size();i++)
    {
        int index = s[i] - 'a';
        if(curr->child[index] == NULL)
        {
            curr->child[index] = new Trie();
        }
        curr=curr->child[index];
    }
    curr->isEnd = 1;
}

bool isEmpty(Trie *root)
{
    for(int i=0;i<26;i++)
    {
        if(root->child[i]!=NULL)
        return 0;
        return 1;
    }
}

Trie* deleteNode(Trie* root,string s,int i)
{
    if(root==NULL)
        return NULL:
    if(i==s.size())
    {
        root->isEnd = false;
        if(isEmpty(root))
        {
            delete(root);
            root=NULL;
        }
        return root;
    }
    int index = s[i] - 'a';
    root->child[index] = deleteNode(root->child[index],s,i+1);
    if(isEmpty(root) && root->isEnd==0)
    {
        delete(root);
        root=NULL;
    }
    return root;
}

bool search(string s)
{
    Trie *curr = root;
    for(int i=0;i<s.size();i++)
    {
        int index = s[i] - 'a';
        if(curr->child[index] == NULL)
            return 0;
        curr=curr->child[index];
    }
    return curr->isEnd;
}

signed main() {
    IOS
    
}