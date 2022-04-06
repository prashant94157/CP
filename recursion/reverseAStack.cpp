#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(x) x.begin(),x.end()

void print(stack<int> s)
{
    if(s.size()==0)
    {
        cout<<"Khatam tata bye bye"<<endl;
        return;
    }
    cout<<s.top()<<" ";
    s.pop();
    print(s);
}

void PhirJhodo(stack<int> &s,int temp)
{
    if(s.size()==0)
    {
        s.push(temp);
        return;
    }
    int v = s.top();
    s.pop();
    PhirJhodo(s,temp);
    s.push(v);
}

void PalatDo(stack<int> &s)
{
    // print(s);
    if(s.size()==1)
    return;
    int temp = s.top();
    s.pop();
    PalatDo(s);
    PhirJhodo(s,temp);
    // s.push(temp);
}

int main()
{
    int x,n,i;
    stack<int> s;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        s.push(x);
        // print(s);
    }
    print(s);
    PalatDo(s);
    print(s);
    return 0;
}