#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int fun(vector<int> arr,int i,vector<int> &res)
{
    if(i+1>=arr.size())
    return 0;
    if(res[i]!=-1)
    return res[i];
    res[i]= min(fun(arr,i+1,res)+arr[i],fun(arr,i+2,res)+arr[i+1]);
    return res[i];
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto &i:arr)
    cin>>i;
    vector<int> res(n,-1);
    cout<<fun(arr,0,res)<<endl;

}