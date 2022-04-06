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
    vector<int> nums({1,2,3});
    vector<vector<int>> res;
    vector<int> temp;
    fun(nums,temp,0,res);
    for(auto a:res)
    {
        for(auto b:a)
        {
            cout<<b<<" ";
        }
        cout<<endl;
    }
}