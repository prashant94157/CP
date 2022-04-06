#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int Repeat(vector<int> count,int k)
{
    for(size_t i=0;i<256;i++)
    {
        if(count[i]>0 && count[i]<k)
        return 0;
    }
    return 1;
}

int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    int m=INT_MIN;
    vector<int> count(256,0);
    for(size_t i=0;i<k-1;i++)
    {
        count[s[i]]++;
    }
    for(int i=0;i<s.size()-k;i++)
    {
        count[s[i]]++;
        if(Repeat(count,k))
        m=max(m,k+i);
    }
}