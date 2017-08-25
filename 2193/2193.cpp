//
//  2193.cpp
//  example
//
//  Created by hwangyunho on 2017. 8. 25..
//  Copyright © 2017년 hwangyunho. All rights reserved.
//

#include <iostream>
using namespace std;
long long Dp[91];
int main()
{
    ios_base::sync_with_stdio(false);
    int num;
    cin>>num;
    Dp[0]=0, Dp[1]=1;
    for(int i=2;i<=num;i++)
    {
        Dp[i]=Dp[i-2]+Dp[i-1];
    }
    cout<<Dp[num]<<"\n";
    return 0;
}
