#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    stack<int> s;
    while(n--)
    {
        string str;
        cin>>str;
        if(str=="push")
        {
            int num;
            cin>>num;
            s.push(num);
        }
        else if(str=="pop")
        {
            cout<<(s.empty()?-1:s.top())<<"\n";
            if(!(s.empty()))
                   s.pop();
        }
        else if(str=="size")
        {
            cout<<s.size()<<"\n";
        }
        else if(str=="empty")
        {
            cout<<s.empty()<<"\n";
        }
        else if(str=="top")
        {
            cout<<(s.empty()?-1:s.top())<<"\n";
        }
    }
    return 0;
}