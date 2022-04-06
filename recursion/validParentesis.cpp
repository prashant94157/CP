#include <iostream>
using namespace std;

void fun(string temp,int a,int b)
{
    if(a==0 && b==0)
    {
        cout<<temp<<" ";
    }
    if(a>0)
    fun(temp+'(',a-1,b+1);
    if(b>0)
    fun(temp+')',a,b-1);
}

int main()
{
    int n;
    cin>>n;
    fun("",n,0);
}