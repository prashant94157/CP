#include<bits/stdc++.h>
using namespace std;

int swap(long long *a,long long *b)
{
    long long t=*a;
    *a=*b;
    *b=t;
    return 0;
}

int bubbleSort(long long a[],long long n)
{
    for(long long i=0;i<n-1;i++)
    {
        for(long long j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            swap(a[j],a[j+1]);
        }
    }
    return 0;
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
bubbleSort(a,n);
print(a,n);
}
