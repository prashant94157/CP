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

void addEdge(vector<ll> adj[],ll x,ll y)
{
    adj[x].push_back(y);
    adj[y].push_back(x);
}

void bfs(vector<ll> adj[],ll v,ll s)
{
    vector<bool> visited(v+1,0);
    queue<ll> q;
    visited[s]= 1;
    q.push(s);
    while(!q.empty())
    {
        ll u = q.front();
        q.pop();
        cout<<u<<" ";
        for(ll i=0;i<adj[u].size();i++)
        {
            if(!visited[adj[u][i]])
            {
                visited[adj[u][i]] = 1;
                q.push(adj[u][i]);
            }
        }
    }
}

void dfs(vector<ll> adj[],ll s,vector<bool> &visited)
{
    visited[s]=1;
    cout<<s<<" ";
    for(ll i=0;i<adj[s].size();i++)
    {
        if(!visited[adj[s][i]])
        {
            dfs(adj,adj[s][i],visited);
        }
    }
}

bool dfsRec(vector<ll> adj[],ll s,vector<bool> &visited,ll parent)
{
    visited[s]=1;
    for(ll i=0;i<adj[s].size();i++)
    {
        if(!visited[adj[s][i]])
        {
            if(dfsRec(adj,adj[s][i],visited,s))
            return 1;
            else if(adj[s][i]!=parent)
            return 1;
        }
    }
    return 0;
}

int main()
{
    ll v;
    cin>>v;
    ll e;
    cin>>e;
    vector<ll> adj[v];
    while(e--)
    {
        ll x,y;
        cin>>x>>y;
        addEdge(adj,x,y);
    }

    //For Printing adjactency list
    // for(auto a:adj)
    // {
    //     for(auto b:a)
    //     cout<<b<<" ";
    //     cout<<endl;
    // }


    //For bfs and dfs traversal of Graph
    // ll s;
    // cin>>s;
    // bfs(adj,v,s);
    // vector<bool> visited(v+1,0);
    // dfs(adj,s,visited);


    //For detecting loops using dfs traversal of Undirected Graph
    int f=0;
    vector<bool> visited(v+1,0);
    for(ll i=0;i<v;i++)
    {
        if(!visited[i])
        {
            if(dfsRec(adj,i,visited,-1)==true)
            {
                f=1;
                break;
            }
        }
    }
    if(f==0)
    cout<<"NO";
    else cout<<"YES";
}