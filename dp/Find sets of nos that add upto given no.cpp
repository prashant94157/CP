#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void fun(vector<int> arr,int k,int i,vector<vector<int>> &res,vector<int> &temp)
{
    if(k<0 || i==arr.size())
    return;
    if(k==0)
    {
        res.push_back(temp);
        for(auto a:temp)
        cout<<a<<" ";
        cout<<endl;
        return;
    }
    temp.push_back(arr[i]);
    fun(arr,k-arr[i],i+1,res,temp);
    temp.pop_back();
    fun(arr,k,i+1,res,temp);
}

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(auto &a:arr)
    cin>>a;
    vector<vector<int>> res;
    vector<int> temp;
    fun(arr,k,0,res,temp);
    for(auto a:res)
    {
        for(auto b:a)
        cout<<b<<" ";
        cout<<endl;
    }
}