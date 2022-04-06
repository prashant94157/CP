#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

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
        fun(stemp,temp+ttemp+" ");
    }
}

int main()
{
    fun("nitin","");
}