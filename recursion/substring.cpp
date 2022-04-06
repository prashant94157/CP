#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void fun(string s,string temp="",int i=0)
{
    if(s.size()==i)
    {
        cout<<temp<<endl;
        return;
    }
    fun(s,temp,i+1);
    fun(s,temp+s[i],i+1);
}

int main()
{
    fun("abc");
}