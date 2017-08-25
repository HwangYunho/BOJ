//
//  11057.cpp
//  example
//
//  Created by hwangyunho on 2017. 8. 25..
//  Copyright © 2017년 hwangyunho. All rights reserved.
//

#include <iostream>
using namespace std;
int mod=10007, ans=0;
int Dp[1001][10];
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    for(int i=0;i<=9;i++)
        Dp[1][i]=1;
    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<=9;j++)
        {
            for(int k=0;k<=j;k++)
            {
                Dp[i][j]+=Dp[i-1][k];
                Dp[i][j]%=mod;
            }
        }
    }
    for(int i=0;i<=9;i++)
        ans+=Dp[n][i];
    ans%=mod;
    cout<<ans<<"\n";
    return 0;
}
