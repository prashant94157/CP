#include <bits/stdc++.h>
using namespace std;



int main()
{
    long long t;
    cin>>t;
    //t=1;
    while (t--)
    {
        long long n,i,r;
        cin>>n;
        vector<int> f(n,-1); 
        while(n>0)
        {
            i=0,r=0;
            if(f[i]==-1)
            {
                f[i]=n;
                r=f[i]/10;
                f[i]%=10;
                i++;
            }
            else{
                for(i=0;f[i]!=-1;i++)
                {
                    f[i]=f[i]*n + r;
                    r=f[i]/10;
                    f[i]%=10;
                }
            }
            while(r>0)
            {
                f[i]=r%10;
                r/=10;
                i++;
            }
            n--;
        }
        for(i=0;f[i]!=-1;i++);
        while(i--)
        cout<<f[i];
        cout<<endl;
    }
    return 0;
}