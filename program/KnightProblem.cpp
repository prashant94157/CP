#include<bits/stdc++.h>
using namespace std;

bool fun(vector<vector<int>> &arr,int n,unsigned int r,unsigned int c,unsigned int mov)
{
    if(mov==arr.size()*arr.size())
    return true;
    vector<int> rd={+2,+1,-1,-2,-2,-1,+1,+2},cd={+1,+2,+2,+1,-1,-2,-2,-1};
    for(size_t i=0;i<rd.size();i++)
    {
        int nc = c + cd[i];
        int nr = r + rd[i];
        if(nc>=0 && nc<n && nr>=0 && nr<n && arr[nr][nc]==0)
        {
            arr[nr][nc]=mov+1;
            bool ans = fun(arr,n,nr,nc,mov + 1);
            if(ans)
            return true;
            arr[nr][nc]=0;
        }

    }

    return false;
}

 int main()
 {
 long long t;
 cin>>t;
 while(t--)
 {
    int n;
    cin>>n;
    vector<vector<int>> arr(n,vector<int> (n,0));
    arr[0][0]=1;
    cout<<fun(arr,n,0,0,1)<<endl;
    for(size_t i=0;i<arr.size();i++)
    {
        for(size_t j=0;j<arr[i].size();j++)
        cout<<arr[i][j]<<" ";
        cout<<endl;
    }
 }
 return 0;
}
