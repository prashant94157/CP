#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> count(256,0);
    string s,t;
    cin>>s>>t;bool ans=1;
    if(s.size()==t.size())
    {
        for(size_t i=0;i<s.size();i++)
        count[s[i]]++;
        for(size_t i=0;i<t.size();i++)
        count[t[i]]--;
        for(size_t i=0;i<256;i++)
        {
            if(count[i]>0)
            {
                ans=0;
                break;
            }
        }
    }
    else ans=0;
    ans ? cout<<"YES" : cout<<"NO";
}