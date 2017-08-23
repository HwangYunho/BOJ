#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    queue<int> q;
    int n;
    cin>>n;
    while(n--)
    {
        string str;
        cin>>str;
        if(str=="push")
        {
            int x;
            cin>>x;
            q.push(x);
        }
        else if(str=="pop")
        {
            cout<<(q.empty()?-1:q.front())<<"\n";
            if(!q.empty())
                q.pop();
        }
        else if(str=="size")
        {
            cout<<q.size()<<"\n";
        }
        else if(str=="empty")
        {
            cout<<q.empty()<<"\n";
        }
        else if(str=="front")
        {
            cout<<(q.empty()?-1:q.front())<<"\n";
        }
        else {
            cout<<(q.empty()?-1:q.back())<<"\n";
        }
    }
}
