//
//  2581.cpp
//  example
//
//  Created by hwangyunho on 2017. 9. 2..
//  Copyright © 2017년 hwangyunho. All rights reserved.
//

#include <iostream>
using namespace std;
int a[10001];
int main()
{
    int m,n,c=0,t=0;
    cin>>m>>n;
    for(int i=m;i<=n;i++)
    {
        if(i==1)
            continue;
        else if(i==2)
        {
            a[c]=2;
            c++;
            continue;
        }
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                t=1;
                break;
            }
            else
                continue;
        }
        if(t==0)
        {
            a[c]=i;
            c++;
        }
        t=0;
    }
    if(c==0)
        cout<<"-1"<<"\n";
    else
    {
        for(int i=0;i<c;i++)
            t+=a[i];
        cout<<t<<"\n"<<a[0]<<"\n";
    }
    return 0;
}
