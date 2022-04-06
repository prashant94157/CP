#include <bits/stdc++.h>
using namespace std;

int partition(int arr[],int l,int r)
{
    int temp=arr[r];
    int i=l-1,j=l;
    while(j<r)
    {
        if(arr[j]<temp)
        {
            i++;
            swap(arr[i],arr[j]);
        }
        j++;
    }
    swap(arr[i+1],arr[r]);
    return i+1;
}

void qSort(int arr[],int l,int r)
{
    if(l<r)
    {
        int p = partition(arr,l,r);
        qSort(arr,l,p-1);
        qSort(arr,p+1,r);
    }
}

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int arr[] = {2,1,4,3,6,8,7,5,8,7,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    print(arr,n);
    qSort(arr,0,n-1);
    print(arr,n);
}
