#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<int> count(256,-1);
    int x =INT8_MAX;
    for(size_t i=0;i<s.size();i++)
    {
        if(count[s[i]]==-1)
        count[s[i]]=i;
        else
        {
            count[s[i]]=-2;
        }
    }
    for(size_t i=0;i<count.size();i++)
    {
        if(count[i]>-1)
        x = min(x,count[i]);
    }
    (x==INT8_MAX) ? cout<<"-1" : cout<<x;
}