//
//  2579.cpp
//  example
//
//  Created by hwangyunho on 2017. 9. 2..
//  Copyright © 2017년 hwangyunho. All rights reserved.
//

#include <iostream>
using namespace std;
int a[301];
int dp[301][3];
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    dp[1][1]=a[1];
    for(int i=2;i<=n;i++)
    {
        dp[i][2]=dp[i-1][1]+a[i];
        dp[i][1]=max(dp[i-2][1],dp[i-2][2])+a[i];
    }
    cout<<max(dp[n][1],dp[n][2])<<"\n";
    return 0;
}
