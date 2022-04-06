#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool pallindrome(string s)
{
    for(size_t i=0;i<s.size()/2;i++)
    {
        if(s[i]!=s[s.size()-i-1])
        return 0;
    }
    return 1;
}

void fun(string s,string temp)
{
    if(s.size()==0)
    {
        cout<<temp<<endl;
        return;
    }
    for(size_t i=0;i<s.size();i++)
    {
        string ttemp = s.substr(0,i+1);
        string stemp = s.substr(i+1);
        if(pallindrome(ttemp))
        fun(stemp , temp + ttemp + " ");
    }
}

int main()
{
    fun("abbcbc","");
}