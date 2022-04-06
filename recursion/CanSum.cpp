#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool fun(int k,int i,vector<int> res)
{
    if(k==0)
    return true;
    if(k<0 || i==res.size())
    return false;
    bool ans = fun(k-res[i],i,res);
    if(ans)
    return ans;
    ans = fun(k,i+1,res);
    return ans;
}

int main()
{
    int k=3;
    vector<int> res({5,3,4,7});
    cout<<fun(k,0,res);
}