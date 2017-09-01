//
//  1235.cpp
//  example
//
//  Created by hwangyunho on 2017. 9. 1..
//  Copyright © 2017년 hwangyunho. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
string name[1001];
int main()
{
    ios_base::sync_with_stdio(false);
    int n,t,c,ans=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>name[i];
    t=name[1].length()-1;
    for(int i=t;i>=0;i--)
    {
        c=0;
        for(int j=1;j<=n;j++)
        {
            string temp;
            if(i==0)
                temp=name[j];
            else
                temp=name[j].substr(i,t);
            for(int k=j+1;k<=n;k++)
            {   string cmp;
                if(i==0)
                    cmp=name[k];
                else
                    cmp=name[k].substr(i,t);
                if(temp==cmp)
                    c++;
            }
        }
        if(c==0)
        {
            ans=t-i+1;
            break;
        }
    }
    cout<<ans<<"\n";
    return 0;
}
