#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll binarySearch(vector<ll> arr)
{
    ll s=0,e=arr.size()-1;
    while(s<=e)
    {
        ll mid= s+(e-s)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        {
            return mid;
        }
        else if(arr[mid-1]<arr[mid])
        s=mid+1;
        else e=mid-1;
    }
    return -1;
}

int main()
{
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(auto &a:arr)
    {
        cin>>a;
    }
    cout<<binarySearch(arr)<<endl;
}