#include <bits/stdc++.h>
using namespace std;

void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}

void heapify(int arr[],int size)
{
    for(int i=size/2;i>=0;i--)
    {
        int a=i,b=2*(i-1),c=2*(i-1)+1;
        if(c<size)
        {
        if(arr[b]>=arr[a] && arr[b]>=arr[c])
        swap(arr[b],arr[a]);
        else
        if(arr[c]>=arr[a] && arr[c]>=arr[b])
        swap(arr[c],arr[a]);
        }
        else if(b<size)
        {
            if(arr[b]>arr[a])
            swap(arr[b],arr[a]);
        }
        //cout<<"i "<<endl;
    }
}

int main()
{
    int arr[] = {1, 5,7,4,5,3,2,9,1,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    print(arr,n);
    for(int i=n;i>0;i--)
    {
        heapify(arr,i);
        swap(arr[0],arr[i-1]);
        print(arr,n);
    }
    print(arr,n);
}
