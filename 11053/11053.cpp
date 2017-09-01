//
//  11053.cpp
//  example
//
//  Created by hwangyunho on 2017. 9. 1..
//  Copyright © 2017년 hwangyunho. All rights reserved.
//


#include <iostream>
using namespace std;
int a[1001];
int d[1001];
int main()
{
    ios_base::sync_with_stdio(false);
    int n, max=0, min;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        min=0;
        for(int j=0;j<i;j++)
        {
            if(a[i]>a[j])
            {
                if(min<d[j])
                    min=d[j];
            }
        }
        d[i]=min+1;
        if(max<d[i])
            max=d[i];
    }
    cout<<max;
    return 0;
}
