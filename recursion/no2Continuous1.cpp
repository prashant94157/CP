#include <bits/stdc++.h>
using namespace std;

void fun(unsigned int n,string temp="")
{
    if(n==temp.size())
    {
        cout<<temp<<endl;
        return;
    }
    fun(n,temp+"0");
    if(temp.size()>1 && temp[temp.size()-1]=='0' || temp.size()==0)
    fun(n,temp+"1");
}

int main()
{
    unsigned int n;
    cin>>n;
    fun(n);
    return 0;
}