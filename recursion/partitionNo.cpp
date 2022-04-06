#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void fun(vector<int> arr,vector<int> temp,vector<vector<int>> &res)
{
    if(arr.size()==0)
    {
        res.push_back(temp);
        return;
    }
    for(size_t i=0;i<arr.size();i++)
    {
        vector<int> a(arr.begin(),arr.begin()+i);
        for(auto b:a)
        cout<<b<<" ";
        cout<<endl;
        // if(i!=0)
        // {
        //     vector<int> a(arr.begin(),arr.begin()+i);
        //     vector<int> t(arr.begin()+1+i,arr.end());
        //     for(size_t j=0;j<t.size();j++)
        //     temp.push_back(t[j]);
        //     fun(a,temp,res);
        //     for(size_t j=0;j<t.size();j++)
        //     temp.pop_back();
        // }
        // else
        // {
        //     vector<int> a;
        //     vector<int> t(arr.begin(),arr.end());
        //     for(size_t j=0;j<t.size();j++)
        //     temp.push_back(t[j]);
        //     fun(a,temp,res);
        //     for(size_t j=0;j<t.size();j++)
        //     temp.pop_back();
        // }
    }
}

int main()
{
    vector<int> arr({1,2,3});
    vector<int> temp;
    vector<vector<int>> res;
    fun(arr,temp,res);
    // for(size_t i=0;i<res.size();i++)
    // {
    //     for(size_t j=0;j<res[i].size();j++)
    //     {
    //         cout<<res[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}