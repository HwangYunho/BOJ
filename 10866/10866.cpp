#include <iostream>
#include <deque>
#include <string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    deque<int> d;
    int n;
    cin>>n;
    while(n--)
    {
        string str;
        cin>>str;
        if(str=="push_front")
        {
            int t;
            cin>>t;
            d.push_front(t);
        }
        else if(str=="push_back")
        {
            int t;
            cin>>t;
            d.push_back(t);
        }
        else if(str=="pop_front")
        {
            cout<<(d.empty()?-1:d.front())<<"\n";
            if(!d.empty())
                d.pop_front();
        }
        else if(str=="pop_back")
        {
            cout<<(d.empty()?-1:d.back())<<"\n";
            if(!d.empty())
                d.pop_back();
        }
        
        else if(str=="size")
        {
            cout<<d.size()<<"\n";
        }
        else if(str=="empty")
        {
            cout<<d.empty()<<"\n";
        }
        else if(str=="front")
        {
            cout<<(d.empty()?-1:d.front())<<"\n";
        }
        else{
            cout<<(d.empty()?-1:d.back())<<"\n";
        }
    }
    
}