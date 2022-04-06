#include <bits/stdc++.h>
using namespace std;



int main()
{
    long long t;
    cin>>t;
    //t=1;
    while (t--)
    {
        long long n,m;
        cin>>n>>m;
        long long i,a;bool ans=1;
        vector<long long> c(100005,0); 
        for(i=0;i<n;i++)
        {
            cin>>a;
            c[a]++;
        }
        for(i=0;i<m;i++)
        {
            cin>>a;
            if(c[a]-1<0)
            ans=0;
            c[a]--;
        }
        if(ans)
        cout<<"Yes";
        else
        {
            cout<<"No";
        }
        
        cout<<endl;
    }
    return 0;
}