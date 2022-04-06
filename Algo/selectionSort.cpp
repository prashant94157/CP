#include<bits/stdc++.h>
using namespace std;

int swap(long long *a,long long *b)
{
    long long t=*a;
    *a=*b;
    *b=t;
    return 0;
}

int selectionSort(long long a[],long long n)
{
    for(long long i=0;i<n-1;i++)
    {
        long long min=a[i],pos=i;
        for(long long j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                pos=j;
            }
        }
        swap(a[i],a[pos]);
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
selectionSort(a,n);
print(a,n);
}
