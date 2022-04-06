#include <bits/stdc++.h>
using namespace std;
void fun(string s,unsigned int k,string temp="")
{
    if(temp.size()==k)
    {
        cout<<temp<<" ";
        return;
    }
    for(size_t i=0;i<s.size();i++)
    {
        string t = temp + s[i];
        fun(s,k,t);
    }
}
int main()
{
string s;int k;cin>>k;
cin>>s;
fun(s,k);
return 0;
}
