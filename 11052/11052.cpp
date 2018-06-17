//
//  11052.cpp
//  example
//
//  Created by hwangyunho on 2018. 6. 17..
//  Copyright © 2018년 hwangyunho. All rights reserved.
//

#include <iostream>
using namespace std;
int cost[1001];
int dp[1001];

int main() {
    int n;
    cin >> n;
    
    for(int i=1;i<=n;i++) {
        cin>>cost[i];
    }
    
    for(int i=1;i<=n; i++) {
        for(int j=1;j<=i;j++) {
            if (dp[i] < dp[i-j] + cost[j]) {
                dp[i] = dp[i-j] + cost[j];
            }
        }
    }
    cout<<dp[n];
    return 0;
}
