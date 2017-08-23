#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    while(n--)
    {
        stack<char> s;
        string str;
        cin>>str;
    
        for(int i=0; i<str.size();i++)
        {
            if(str[i]=='(')
                s.push(str[i]);
            else if(str[i]==')')
            {
                if(s.empty())
                {
                    s.push(str[i]);
                }
                else if(!(s.empty())&&(s.top()=='('))
                s.pop();
            }
        }
    cout<<(s.empty()?"YES":"NO")<<"\n";
    }
}