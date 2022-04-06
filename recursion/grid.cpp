#include <iostream>
using namespace std;

void fun(int n,int m,int &res,int x,int y,string t ="")
{
    if(n==x && m==y)
    {
        cout<<t<<endl;
        res++;
        return;
    }
    if(x>n || y>m)
    return;
    fun(n,m,res,x+1,y,t+"H");
    fun(n,m,res,x+1,y+1,t+"D");
    fun(n,m,res,x,y+1,t+"V");
}

int main() {
	int n,m,res=0;
	cin>>n>>m;
	fun(n,m,res,0,0);
	cout<<res;
	return 0;
}