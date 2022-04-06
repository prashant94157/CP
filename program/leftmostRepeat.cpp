#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<int> count(256,-1);int x =INT8_MAX;
    for(size_t i=0;i<s.size();i++)
    {
        if(count[s[i]]==-1)
        count[s[i]]=i;
        else
        {
            if(x>count[s[i]])
            x=count[s[i]];
        }
    }
    if(x == INT8_MAX)
    cout<<"-1"<<endl;
    else
    cout<<x<<endl;
}