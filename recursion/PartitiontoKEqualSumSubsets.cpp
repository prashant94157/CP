#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool fun(vector<int> nums,int sum,int size,vector<bool> visited)
{
    int c=0;
    
    for()
}
int main()
{
    vector<int> nums({4, 3, 2, 3, 5, 2, 1});
    int k=4;
    int r=nums.size(),sum=0;
    sort(nums.begin(),nums.end());
    for(size_t i=0;i<r;i++)
    {
        sum+=nums[i];
    }
    if(nums[r-1]>sum/k || sum%k!=0)
        return 0;
    sum/=k;
    while(nums[r-1]==sum)
    {
        r--;
    }
    vector<bool> visited(r+1,0);
    cout<<fun(nums,sum,r,visited);
}