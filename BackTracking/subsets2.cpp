#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void fun(vector<int>& n,vector<int> temp,int i,vector<vector<int>> &res)
{
    if(i==n.size())
    {
        res.push_back(temp);
        return;
    }
    fun(n,temp,i+1,res);
    temp.push_back(n[i]);
    fun(n,temp,i+1,res);
    temp.pop_back();
}

int main()
{
    vector<int> nums({1,2,3,2});
    vector<vector<int>> res;
    vector<int> temp;
    sort(nums.begin(),nums.end());
    fun(nums,temp,0,res);
    sort(res.begin(),res.end());
    res.erase(unique(res.begin(),res.end()),res.end());
    for(auto a:res)
    {
        for(auto b:a)
        {
            cout<<b<<" ";
        }
        cout<<endl;
    }
}