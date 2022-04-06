#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void print(vector<int> arr)
{
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void nextPermutation(vector<int> arr,vector<int> a)
{
    if(arr.size()==0)
    {
        print(a);
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
        nextPermutation(s,a);
        a.pop_back();
    }
}

int main()
{
    vector<int> arr({1,2,3});
    vector<int> a;
    nextPermutation(arr,a);
}