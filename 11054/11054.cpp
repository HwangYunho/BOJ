//
//  11054.cpp
//  example
//
//  Created by hwangyunho on 2017. 9. 1..
//  Copyright © 2017년 hwangyunho. All rights reserved.
//

#include <iostream>
using namespace std;
int a[1001];
int dp1[1001];
int dp2[1001];
int main()
{
    ios_base::sync_with_stdio(false);
    int n, min;
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
                if(min<dp1[j])
                    min=dp1[j];
            }
        }
        dp1[i]=min+1;
    }
    for(int i=n;i>=1;i--)
    {
        min=0;
        for(int j=n;j>i;j--)
        {
            if(a[i]>a[j])
            {
                if(min<dp2[j])
                    min=dp2[j];
            }
        }
        dp2[i]=min+1;
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        if(ans<dp1[i]+dp2[i]-1)
            ans=dp1[i]+dp2[i]-1;
    }
    cout<<ans<<"\n";
    return 0;
}
