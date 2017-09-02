//
//  1978.cpp
//  example
//
//  Created by hwangyunho on 2017. 9. 2..
//  Copyright © 2017년 hwangyunho. All rights reserved.
//

#include <iostream>
using namespace std;
int a[1001];
int main()
{
    ios_base::sync_with_stdio(false);
    int c,n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    c=n;
    for(int i=1;i<=n;i++)
    {
        if(a[i]==1)
        {
            c--;
            continue;
        }
        else if(a[i]==2)
            continue;
        else
        {
            for(int j=2;j<a[i];j++)
            {
                if(a[i]%j==0)
                {
                    c--;
                    break;
                }
            
            }
        }
    }
    cout<<c<<"\n";
    return 0;
}
