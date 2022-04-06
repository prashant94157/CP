#include <bits/stdc++.h>
using namespace std;



int main()
{
    long long t;
    cin>>t;
    //t=1;
    while (t--)
    {
        long long n,x;
        cin>>n>>x;
        long long a[n],i,j,k;bool ans=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0;i<n-2 && !ans;i++)
        {
            j=i+1;
            k=n-1;
            while(j<k && !ans)
            {
                if(a[i]+a[j]+a[k]==x)
                {
                    ans=1;
                }
                else if(a[i]+a[j]+a[k]>x)
                k--;
                else j++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}