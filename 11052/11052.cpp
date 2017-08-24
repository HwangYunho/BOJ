//
//  11052.cpp
//  example
//
//  Created by hwangyunho on 2017. 8. 11..
//  Copyright © 2017년 hwangyunho. All rights reserved.
//

#include <iostream>
using namespace std;
int cost[1001];
int dp[1001];
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>cost[i];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            dp[i]=max(dp[i], dp[i-j]+cost[j]);
    }
    cout<<dp[n]<<"\n";
}
