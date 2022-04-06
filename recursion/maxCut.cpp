#include <bits/stdc++.h>
using namespace std;
// recursion
long long fun(long long n,long long a,long long b,long long c)
{
    if(n==0)
    return 0;
    if(n<0)
    return -1;
    long long x=fun(n-a,a,b,c),y=fun(n-b,a,b,c),z=fun(n-c,a,b,c);
    if(max(x,max(y,z))==-1)
    return -1;
    else
    return max(x,max(y,z))+1;
}
// DP
long long f(long long n,long long a,long long b,long long c,vector<long long> arr)
{
    if(n-a>0)
    arr[n-a]=max(f(n-a,a,b,c,arr)+1,arr[n-a]);
    if(n-b>0)
    arr[n-b]=max(f(n-b,a,b,c,arr)+1,arr[n-b]);
    if(n-c>0)
    arr[n-c]=max(f(n-c,a,b,c,arr)+1,arr[n-c]);
    arr[n]=max(arr[n-a],max(arr[n-b],arr[n-c]));
    return arr[n];
}
int main()
{
    long long n,a,b,c;
    cin>>n>>a>>b>>c;
    cout<<fun(n,a,b,c)<<endl;
    vector<long long > count(n+1,-1);
    count[0]=0;
    cout<<f(n,a,b,c,count)<<endl;
    return 0;
}