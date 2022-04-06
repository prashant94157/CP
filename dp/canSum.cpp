#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool fun(ll k,ll i,vector<ll> res,vector<bool> count)
{
    if(i==k)
    return count[i];
    if(i>k)
    return 0;
    if(count[i]==0)
    {
        while(count[i]==0)
        i++;
        return fun(k,i+1,res,count);
    }
    else
    {
        for(size_t j=0;j<res.size();j++)
        {
            if(i+res[j]<k+1)
            count[i+res[j]]=1;
            if((k-i)%res[j]==0)
            return 1;
        }
        return fun(k,i+1,res,count);
    }
    return 0;
}

int main()
{
    ll k;
    cin>>k;
    ll n;
    cin>>n;
    vector<ll> res(n);
    for(auto &a:res)
    cin>>a;
    vector<bool> count(k+1,0);
    count[0]=1;
    cout<<fun(k,0,res,count);
}