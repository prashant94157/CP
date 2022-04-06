#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int32_t validity(vector<string>& board,int a,int b)
{
    int c=0,z=0;
    for(int i=0;i<3;i++)
    {
        if(board[i][0]==board[i][1] && board[i][1]==board[i][2])
        {
            if(board[i][0]=='X')
                c++;
            if(board[i][0]=='O')
                z++;
        }
        if(board[0][i]==board[1][i] && board[1][i]==board[2][i])
        {
            if(board[0][i]=='X')
                c++;
            if(board[0][i]=='O')
                z++;
        }
    }
    if(board[0][0]==board[1][1] && board[1][1]==board[2][2])
    {
        if(board[0][0]=='X')
            c++;
        if(board[0][0]=='O')
            z++;
    }
    if(board[2][0]==board[1][1] && board[1][1]==board[0][2])
    {
        if(board[2][0]=='X')
            c++;
        if(board[2][0]=='O')
            z++;
    }
    if((c==2 && z==0 && a==5) || (c==1 && z==0 && a==b+1) || (c==0 && z==0 && a+b==9) || (c==0 && z==1 && a==b))
    return 1;
    else if(c==0 && z==0)
    return 2;
    return 3;
}

int validTicTacToe(vector<string>& board) {
    ll c=0,z=0;
    for(auto a:board)
    {
        for(auto b:a)
        {
            if(b=='X')
            c++;
            if(b=='O')
            z++;
        }
    }  
    if(z>c || c>z+1)
    return 3;
    return validity(board,c,z);
}

int main()
{
    ll testcase;
    cin >> testcase;
	// testcase=1;
    while(testcase--)
    {
        vector<string> b(3);
        for(auto &a:b)
        {
            cin>>a;
        }
        cout<<validTicTacToe(b)<<endl;
    }
}