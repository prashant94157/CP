#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void fun(vector<string> s,string str,string temp,size_t i,vector<string> res)
{
    if(str.size()==temp.size())
    {
        res.push_back(temp);
        cout<<temp<<endl;
        return;
    }
    for(size_t j=0;j<s[str[i]-'0'].size();j++)
    {
        fun(s,str,temp+s[str[i]-'0'][j],i+1,res);
    }
}

int main()
{
    vector<string> res;
    vector<string> s({"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"});
    string str ="23";
    fun(s,str,"",0,res);
    return 0;
}