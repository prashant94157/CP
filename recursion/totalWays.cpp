#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll fun1(ll n)
{
    if(n==0)
    return 1;
    if(n<0)
    return 0;
    return fun1(n-1) + fun1(n-2) + fun1(n-3);
}

ll fun3(ll n,vector<ll> &arr,ll i)
{
    if(i>n)
    return arr[n];
    arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
    return fun3(n,arr,i+1);
}

ll ABC(int n,int k)
{
    cout<<"ghjfuy";
    vector<ll> arr(n+1,0);
    arr[0]=1;
    for(int i=1;i<n+1;i++)
    {
        arr[i]=0;
        for(int j=1;j<=k;i++)
        {
            if(i-j>=0)
            arr[i]+=arr[i-j];
        }
        cout<<i<<" ";
    }
    return arr[n];
}

int main()
{
    // cout<<fun1(15)<<" ";
    ABC(15,3);
    // vector<ll> arr(16,0);
    // arr[0]=1,arr[1]=1,arr[2]=2;
    // cout<<fun3(15,arr,3)<<endl;   
}