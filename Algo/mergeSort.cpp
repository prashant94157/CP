#include<bits/stdc++.h>
using namespace std;

void Merge(long long a[],long long l,long long m,long long r)
{
    long long n1=m-l+1,n2=r-m;

    long long b[n1],c[n2];

    long long i,j,k;

    for(i=0;i<n1;i++)
        b[i]=a[l+i];

    for(i=0;i<n2;i++)
        c[i]=a[m+1+i];

    i=l;j=0;k=0;
    while(j<n1 && k<n2)
    {
        if(b[j]>c[k])
            a[i++]=c[k++];
        else
            a[i++]=b[j++];
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

void mergeSort(long long a[],long long l,long long r)
{
    if(l<r)
    {
        long long m=l+(r-l)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        Merge(a,l,m,r);
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
long long a[] = {9 ,7 ,6 ,8 ,5 ,4 ,3 ,2 ,6 ,54};
long long n=sizeof(a)/sizeof(a[0]);
print(a,n);
mergeSort(a,0,n-1);
print(a,n);
}
