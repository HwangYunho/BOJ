//
//  9613.cpp
//  example
//
//  Created by hwangyunho on 2017. 9. 3..
//  Copyright © 2017년 hwangyunho. All rights reserved.
//

#include <iostream>
using namespace std;
int a[101];
int main()
{
    ios_base::sync_with_stdio(false);
    int n,n1,c,ma,tot,t,t1;
    cin>>n;
    while(n--)
    {
        cin>>n1;
        tot=0;
        for(int i=1;i<=n1;i++)
            cin>>a[i];
        for(int i=1;i<n1;i++)
        {
            for(int j=i+1;j<=n1;j++)
            {
                ma=1, c=2;
                t=a[i], t1=a[j];
                while(1)
                {
                    if(c>t || c>t1)
                        break;
                    if((t%c==0) && (t1%c==0))
                    {
                        t/=c;
                        t1/=c;
                        ma*=c;
                    }
                    else
                        c++;
                }
                tot+=ma;
            }
        }
        cout<<tot<<"\n";
    }
    return 0;
}
