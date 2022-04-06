#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define all(x) x.begin(),x.end()

#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 
static auto _ = [] ()
{ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();

int knapsack(vector<int> wt,vector<int> val,int c)
{
    int n=val.size();
    vector<vector<int>> res(n+1,vector<int> (c+1,0));
    for(int i=1;i<n+1;i++)
    {
        for(int j=0;j<c+1;j++)
        {
            if(j>=wt[i-1])
            {
                res[i][j] = max(val[i-1] + res[i-1][j-wt[i-1]],res[i-1][j]);
            }
            else res[i][j]=res[i-1][j];
        }
    }
    return res[n][c];
}

int main()
{
    int n;
    cin>>n;
    vector<int> wt(n),val(n);
    for(auto &w:wt)
    cin>>w;
    for(auto &v:val)
    cin>>v;
    int c;
    cin>>c;
    cout<<knapsack(wt,val,c)<<endl;
}