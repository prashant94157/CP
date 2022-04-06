#include<bits/stdc++.h>
using namespace std;

void merge(long long a[],long long l,long long m,long long r,long long *count)
{
    long long n1=m-l+1;
    long long n2 = r-m;
    long long i,j,k;
    long long b[n1],c[n2];
    for(i=0;i<n1;i++)
    {
        b[i]=a[l+i];
    }
    for(i=0;i<n2;i++)
        c[i]=a[m+1+i];
    i=l,j=0,k=0;
    while(j<n1 && k<n2)
    {
        if(b[j]<=c[k])
        a[i++]=b[j++];
        else
        {
            a[i++]=c[k++];
            (*count)=(*count) + n1 - j;
        }
    }
    while(j<n1)
    {
        a[i++]=b[j++];
    }
    while(k<n2)
    {
        a[i++]=c[k++];
    }
}

void mergeSort(long long a[],long long l,long long r,long long *count)
{
    if(l<r)
    {
        long long m=l+(r-l)/2;
        mergeSort(a,l,m,count);
        mergeSort(a,m+1,r,count);
        merge(a,l,m,r,count);
    }
}

int print(long long a[],long long n)
{
    for(long long i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}

int main()
{
    long long a[] = {1,2,3,4,9,8,5,6},count=0;
    long long n=sizeof(a)/sizeof(a[0]);
    print(a,n);
    mergeSort(a,0,n-1,&count);
    print(a,n);
    cout<<count<<endl;
}
