#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool fun(vector<ll> arr,ll target,vector<vector<ll>> &res,ll i=0,string str="")
{
    if(target==0)
    {
        cout<<str<<endl;
        return 1;
    }
    if(target<0)
    return 0;
    if(i==arr.size())
    return 0;
    if(res[i][target]!=-1)
    return res[i][target];
    res[i][target]=fun(arr,target-arr[i],res,i+1,str+" "+to_string(i+1)+" ") || fun(arr,target,res,i+1,str);
    return res[i][target];
}

// bool fun2(vector<ll> arr,ll target,vector<ll> &res,ll i=0)
// {
//     if(target==0)
//     {
//         res[target]=1;
//         return res[target];
//     }
//     if(target<0)
//     return 0;
//     if(i==arr.size())
//     return 0;
//     if(res[target]!=-1)
//     return res[target];
//     res[target]=fun2(arr,target-arr[i],res,i+1) || fun2(arr,target,res,i+1);
//     return res[target];
// }

int main()
{
    ll n,target;
    cin>>n;
    vector<ll> arr(n);
    for(auto &a:arr)
    cin>>a;
    cin>>target;
    vector<vector<ll>> res(n,vector<ll> (target+1,-1));
    cout<<fun(arr,target,res)<<endl;
    // for(auto a:res)
    // {
    //     for(auto b:a)
    //     cout<<b<<" ";
    //     cout<<endl;
    // }
    // vector<ll> a(target+1,-1);
    // cout<<fun2(arr,target,a,0)<<endl;
}