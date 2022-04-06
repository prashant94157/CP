#include <bits/stdc++.h>
using namespace std;

long long fun(long long arr[],long long n,long long k)
{
    long long size = *max_element(arr,arr+n)+2,res=0,i,j;
    vector<long long > count(size,0);
    for(i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    if(k%2==0)
    {
        i=k/2-1,j=k/2+1;
        res = res + (count[k/2]*(count[k/2]-1))/2;
    }
    else
    {
        i=k/2,j=k/2+1;
    }
    for(i,j;i>=0 && j<size ;i--,j++)
    {
        res = res + (count[i])*(count[j]);
    }
    cout<<endl;
    return res;
}

int main()
{
    long long t;
    //cin>>t;
    t=1;
    while (t--)
    {
        long long n,k;
        cin>>n;
        cin>>k;
        long long arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        cout<<fun(arr,n,k)<<endl;
    }
    return 0;
}