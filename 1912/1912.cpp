//
//  1912.cpp
//  example
//
//  Created by hwangyunho on 2017. 9. 2..
//  Copyright © 2017년 hwangyunho. All rights reserved.
//

#include <iostream>
using namespace std;
int a[100001];
int dp[100001];
int main()
{
    ios_base::sync_with_stdio(false);
    int n,max;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        if(dp[i-1]+a[i]>a[i])
            dp[i]=dp[i-1]+a[i];
        else
            dp[i]=a[i];
    }
    max=dp[1];
    for(int i=2;i<=n;i++)
    {
        if(max<dp[i])
            max=dp[i];
    }
    cout<<max<<"\n";
    return 0;
}
