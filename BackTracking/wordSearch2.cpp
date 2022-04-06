#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool fun(vector<vector<char>> board,string word,vector<vector<bool>> &visited,int i,string temp,int r,int c)
{
    if(word==temp)
    {
        return true;
    }
    if(r==board.size() || c==board[0].size() || r<0 || c<0 || temp.size()>=word.size() || i==word.size())
    {
        return false;
    }
    //cout<<temp<<" ";
    bool ans=0;
    if(c+1<board[0].size() && visited[r][c+1]==0 && word[i]==board[r][c+1] && !ans)
    {
        visited[r][c+1]=1;
        //cout<<board[r][c+1]<<" ";
        bool x = fun(board,word,visited,i+1,temp+board[r][c+1],r,c+1);
        if(x)
        ans=1;
        visited[r][c+1]=0;
    }
    if(r>0 && visited[r-1][c]==0 && word[i]==board[r-1][c] && !ans)
    {
        visited[r-1][c]=1;
        //cout<<board[r-1][c]<<" ";
        bool x = fun(board,word,visited,i+1,temp+board[r-1][c],r-1,c);
        if(x)
        ans=1;
        visited[r-1][c]=0;
    }
    if(c>0 && visited[r][c-1]==0 && word[i]==board[r][c-1] && !ans)
    {
        visited[r][c-1]=1;
        //cout<<board[r][c-1]<<" ";
        bool x = fun(board,word,visited,i+1,temp+board[r][c-1],r,c-1);
        if(x)
        ans=1;
        visited[r][c-1]=0;
    }
    if(r+1<board.size() && visited[r+1][c]==0 && word[i]==board[r+1][c] && !ans)
    {
        visited[r+1][c]=1;
        bool x = fun(board,word,visited,i+1,temp+board[r+1][c],r+1,c);
        if(x)
        ans=1;
        visited[r+1][c]=0;
    }
    return ans;
}

int main()
{
    vector<vector<char>> board{{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
    string word="ABAB";
    vector<vector<bool>> visited(board.size(),vector<bool> (board[0].size(),0));
    bool ans=0;
    // for(int i=0;i<board.size() && !ans;i++)
    // {
    //     for(int j=0;j<board[0].size() && !ans;j++)
    //     cout<<board[i][j]<<" ";
    // }
    for(int i=0;i<board.size() && !ans;i++)
    {
        for(int j=0;j<board[0].size() && !ans;j++)
        {
            if(board[i][j]==word[0])
            {
                visited[i][j]=1;
                string temp="";
                temp+=board[i][j];
                if(fun(board,word,visited,1,temp,i,j))
                {
                ans=1;
                }
                visited[i][j]=0;
            }
        }
    }
    if(ans)
    cout<<"true";
    else cout<<"false";
}