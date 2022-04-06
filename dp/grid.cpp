#include <bits/stdc++.h>
using namespace std;

int fun(int n,int m)
{
    if(n==1 && m==1)
    {

        return 1;
    }
    if(n==0 || m==0)
    return 0;
    return fun(n-1,m) + fun(n,m-1);
}

long long fun(int n,int m,vector<vector<long long>> &res)
{
    if(n==0 && m==0)
    {
        return 1;
    }
    if(n<0 || m<0)
    return 0;
    if(res[n][m]!=-1)
    return res[n][m];
    //cout<<n<<" "<<m<<endl;
    res[n][m] = fun(n-1,m,res) + fun(n,m-1,res);
    res[m][n]=res[n][m];
    return res[n][m];
}

int main() {
	int n,m;
	cin>>n>>m;
    vector<vector<long long>> res(n,vector<long long> (m,-1));
    //cout<<fun(n,m)<<endl;
    cout<<fun(n-1,m-1,res)<<endl;
	return 0;
}