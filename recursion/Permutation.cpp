#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void print(vector<vector<int>> arr)
{
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void nextPermutation(vector<int> arr,vector<int> a,vector<vector<int>> &res)
{
    if(arr.size()==0)
    {
        res.push_back(a);
        return;
    }
    for(size_t i=0;i<arr.size();i++)
    {
        vector<int> s;
        for(size_t j=0;j<arr.size();j++)
        {
            if(i==j)
            a.push_back(arr[j]);
            else s.push_back(arr[j]);
        }        
        nextPermutation(s,a,res);
        a.pop_back();
    }
}

int main()
{
    vector<int> arr({1,2,1,3,2});
    vector<int> a;
    vector<vector<int>> res;
    sort(arr.begin(),arr.end());
    nextPermutation(arr,a,res);
    sort(res.begin(),res.end());
    res.erase(unique(res.begin(),res.end()),res.end());
    print(res);
}