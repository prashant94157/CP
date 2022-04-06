#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int minPath(vector<vector<int>> &grid,vector<vector<int>> &res,int r=0,int c=0)
{
    if(r==grid.size() || c==grid[0].size())
    return -1;
    if(r==grid.size()-1 && c==grid[0].size()-1)
    return grid[r][c];
    if(res[r][c]!=-1)
    return res[r][c];
    int a=0,b=0;
    a=minPath(grid,res,r+1,c);
    b=minPath(grid,res,r,c+1);
    if(a!=-1 && b!=-1)
    res[r][c] = min(a,b)+grid[r][c];
    else if(a!=-1) res[r][c] = a+grid[r][c];
    else if(b!=-1) res[r][c] = b+grid[r][c];
    else res[r][c] = grid[r][c];
    return res[r][c];
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> grid(n,vector<int> (m));
    vector<vector<int>> res(n+2,vector<int> (m+2,-1));
    for(auto &a:grid)
    for(auto &b:a)
    cin>>b;
    cout<<minPath(grid,res)<<endl;
}