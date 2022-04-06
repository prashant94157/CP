#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool fun(string s,string p)
{
    string temp=p;
    sort(temp.begin(),temp.end());
    for(size_t i=0;i<s.size()-p.size()+1;i++)
    {
        string t = s.substr(i,temp.size());
        sort(t.begin(),t.end());
        if(t==temp)
        return 1;
    }
    return 0;
}

bool anagram(string s,string t)
{
    vector<int> count(256,0);
    for(size_t i=0;i<s.size();i++)
    count[s[i]]++;
    for(size_t i=0;i<t.size();i++)
    count[t[i]]--;
    for(size_t i=0;i<256;i++)
    {
        if(count[i]>0)
        {
            return 0;
        }
    }
    return 1;
}

bool eff(string s,string p)
{
    for(size_t i=0;i<s.size()-p.size()+1;i++)
    {
        string t = s.substr(i,p.size());
        if(anagram(t,p))
        return 1;
    }
    return 0;
}

bool meff(string s,string t)
{
    vector<int> cs(256,0),ct(256,0);
    for(size_t i=0;i<t.size();i++)
    {
        ct[t[i]]++;
        cs[s[i]]++;
    }
    if(same(cs,ct))
    return 1;
    for(size_t i=1;i<s.size()-p.size()+1;i++)
    {

    }
    return 0;
}

int main()
{
    string s,t;         // s -> n
    cin>>s>>t;          // t -> m
    //naive solution  time = O(n*m*logm)
    cout<<fun(s,t)<<endl;

    //efficient       time = O((n-m+1)*m)
    cout<<eff(s,t)<<endl;

    //most efficient  time = O(n)
    cout<<meff(s,t)<<endl;
}