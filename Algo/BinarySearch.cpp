#include<bits/stdc++.h>
using namespace std;
// time complexity
// log(n)
long long binarySearch(long long a[],long long l,long long r,long long x)
{
    if(l<=r)
    {
        long long mid = l + (r-l)/2;
        if(a[mid]==x)
        return mid;

        if(a[mid]>x)
            return binarySearch(a,l,mid-1,x);
        else
            return binarySearch(a,mid+1,r,x);
    }
    return -1;
}

int main()
{
    long long a[] = {1,4,8,9,6,5,7,0};
    long long n = sizeof(a)/sizeof(a[0]);
    sort(a,a+n);
    cout<<binarySearch(a,0,n-1,5);
}
