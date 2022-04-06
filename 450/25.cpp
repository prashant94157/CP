#include <bits/stdc++.h>
using namespace std;

void fun(int a[],int n)
{
    int i=0,j=-1;
    while(i!=n)
    {
        if(a[i]<0)
        {
            j++;
            swap(a[i],a[j]);
        }
        i++;
    }
    i=0;
    while(j<n)
    {
        if(i%2==1)
        {
            swap(a[i],a[j]);
        }
        i++;j++;
    }
}

int main()
{
    long long t;
    cin>>t;
    //t=1;
    while (t--)
    {
        int n;
        cin>>n;int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        fun(a,n);
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}