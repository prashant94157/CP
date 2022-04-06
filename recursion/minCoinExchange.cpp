#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll fun(ll n)
{
    if(n==0)
    return 0;
    if(n<0)
    return -1;
    int x=fun(n-1),y=fun(n-7),z=fun(n-10);
    if(x!=-1)
    {
        if(y!=-1)
        {
            if(z!=-1)
            return min(x,min(y,z))+1;
            else return min(x,y)+1;
        }
        else
        {
            if(z!=-1)
            return min(x,z)+1;
            else return x+1;
        }
    }
    else
    {
        if(y!=-1)
        {
            if(z!=-1)
            return min(y,z)+1;
            else return y+1;
        }
        else
        {
            if(z!=-1)
            return z+1;
            else return -1;
        }
    }
    return -1;
}

int main()
{
    cout<<fun(15)<<endl;
}