#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void replace(string s,string temp="")
{
    if(s.size()==0)
    {
        cout<<temp;
        return;
    }
    if(s.size()==1)
    {
        temp+=s;
        cout<<temp;
        return;
    }
    string t = "";
    if(s.substr(0,2)=="pi")
    {
        t+="3.14";
        replace(s.substr(2),temp+t);
    }
    else
    {
        t+=s.substr(0,1);
        replace(s.substr(1),temp+t);
    } 
}

int main()
{
    replace("pippxxppiixipi");
}