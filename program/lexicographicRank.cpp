#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int fun(string s)
{
    string t=s;
    sort(t.begin(),t.end());
    int c=0;
    while(t!=s)
    {
        c++;
        next_permutation(t.begin(),t.end());
    }
    return (c+1);
}

ll fact(ll n)
{
    if(n==0 || n==1)
    return 1;
    return n*fact(n-1);
}

ll MA(string s,int i)
{
    ll j=0;
    for(size_t k=i+1;k<s.size();k++)
    {
        if(s[i]>s[k])
        j++;
    }
    return j;
}

ll per(string s)
{
    ll res=0;
    for(size_t i=0;i<s.size();i++)
    {
        res=res + MA(s,i)*fact(s.size()-1-i);
    }
    return res+1;
}

int main()
{
    string s;
    cin>>s;
    // time taking function
    cout<<fun(s)<<endl;

    // better function
    cout<<per(s)<<endl;
}