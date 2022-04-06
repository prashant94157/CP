#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int fun(string s,vector<int> &res,int i=0)
{
    if(s[i]=='0')
        return 0;
    
    if(s.size()==i || s.size()==i+1)
        return 1;
    if(res[i]!=-1)
        return res[i] ;
    if(s[i]=='1')
    {
        if(s[i+1]!='0')
         res[i] = fun(s,res,i+1) + fun(s,res,i+2);
        else res[i] = fun(s,res,i+2);
    }
    else if(s[i]=='2')
    {
        if(s[i+1]=='0')
            res[i] = fun(s,res,i+2);
            else
        if(s[i+1]>'0' && s[i+1]<='6')
          res[i] =  fun(s,res,i+1) + fun(s,res,i+2);
        else res[i] =  fun(s,res,i+1);
    }
    else res[i] =  fun(s,res,i+1);
    return res[i] ;
}

int main()
{
    string s;
    cin>>s;
    vector<int> res(s.size()+5,-1);
    cout<<fun(s,res)<<endl;
}