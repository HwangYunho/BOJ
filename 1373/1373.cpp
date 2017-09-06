//
//  1373.cpp
//  example
//
//  Created by hwangyunho on 2017. 9. 5..
//  Copyright © 2017년 hwangyunho. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    string s2;
    int ans[1000000], c=1,temp=0,si=0;
    cin>>s2;
    for(int i=s2.length()-1;i>=0;i--)
    {
        temp=temp+c*(s2[i]-'0');
        c*=2;
        if(c==8)
        {
            ans[si]=temp;
            si++;
            temp=0;
            c=1;
        }
    }
    if(ans[si]==0 && temp!=0)
        ans[si]=temp;
    else if(ans[si]==0)
        si--;
    for(int i=si;i>=0;i--)
        cout<<ans[i];
    return 0;
}
