#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
I/P
a1Bc
O/p
a1bc
a1bC
a1Bc
a1BC
...
*/

void fun(string s,string temp,int i)
{
    if(i==s.size())
    {
        cout<<temp<<" ";
        return;
    }
    if(s[i]>='a' && s[i]<='z')
    {
        fun(s,temp+s[i],i+1);
        fun(s,temp+char(s[i]-'a'+'A'),i+1);
    }
    else if(s[i]>='0' && s[i]<='9')
    {
        fun(s,temp+s[i],i+1);
    }
    else
    {
        fun(s,temp+s[i],i+1);
        fun(s,temp+char(s[i]-'A'+'a'),i+1);
    }
    
}

int main()
{
    string s;
    cin>>s;
    fun(s,"",0);
    return 0;
}