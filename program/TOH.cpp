#include <bits/stdc++.h>
using namespace std;
int TOH(int n,char a,char b,char c,int &x)
{
    if(n==1)
    {
        cout<<"move 1 from "<<a<<" to "<<c<<endl;x++;
        return x;
    }
    TOH(n-1,a,c,b,x);
    cout<<"move "<<n<<" from "<<a<<" to "<<c<<endl;x++;
    TOH(n-1,b,a,c,x);
    return x;
}

int main()
{
int x=0;
cout<<TOH(3,'A','B','C',x);
}
