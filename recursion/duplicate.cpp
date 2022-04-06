#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void fun(string s)
{
    
    if(s.size()==1)
    {
        cout<<s;
        return;
    }
    if(s[0]!=s[1])
    cout<<s[0];
    fun(s.substr(1));  
}

int main()
{
    fun("aaaabbbeeecdddd");
    return 0;
}