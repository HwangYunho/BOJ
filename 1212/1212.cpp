//
//  1212.cpp
//  example
//
//  Created by hwangyunho on 2017. 9. 6..
//  Copyright © 2017년 hwangyunho. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
string eight[8]={"000","001","010","011","100","101","110","111"};
int main()
{
    ios_base::sync_with_stdio(false);
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++)
    {   int temp=str[i]-'0';
        if(i==0)
        {
            if(temp<4)
            {
                if(temp==0) cout<<"0";
                else if(temp==1) cout<<"1";
                else if(temp==2) cout<<"10";
                else cout<<"11";
            }
            else
                cout<<eight[temp];
        }
        else
            cout<<eight[temp];
    }
    return 0;
}
