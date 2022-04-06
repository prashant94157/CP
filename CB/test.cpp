#include <bits/stdc++.h>
//#include<random>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef map<ll, ll> mll;
const int MOD1 = 1e9 + 7;
const int MOD2 = 998244353;
const int iINF = INT_MAX;
const ll INF = LLONG_MAX;
const ld PI = 3.14159265358979323846;
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
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i <= n; i++)
#define repk(i, m, n) for (int i = m; i <= n; i++)
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define pow2(a) (1LL << a)
#define LB(a, x) (lower_bound(a.begin(), a.end(), x))
#define UB(a, x) (upper_bound(a.begin(), a.end(), x))
#define fixset(ans, n) fixed << setprecision(n) << (ld)ans << endl

class person
{
public:
    string name;
    int age;
    person(string n, int a)
    {
        name = n;
        age = a;
    }
};

class personCompare
{
public:
    bool operator()(person a, person b)
    {
        return a.age > b.age;
    }
};

int main()
{
    int n;
    cin >> n;
    priority_queue<person, vector<person> , personCompare> pq;
    for (int i = 0; i < n; i++)
    {
        string n;
        int m;
        cin >> n >> m;
        person A(n, m);
        pq.push(A);
    }
    while (pq.size() > 0)
    {
        cout << pq.top().name << " " << pq.top().age << "\n";
        pq.pop();
    }
}