#include<bits/stdc++.h>
using namespace std;

int insertionSort(long long a[],long long n)
{
    for(long long i=1;i<n;i++)
    {
        long long t=a[i],j=i-1;
        while(j>=0 && t<a[j])
        {
            a[j+1]=a[j];j--;
        }
        a[j+1]=t;
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
insertionSort(a,n);
print(a,n);
}
