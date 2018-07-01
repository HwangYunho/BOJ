//
//  11005.cpp
//  algorithm
//
//  Created by 황윤호 on 2018. 7. 1..
//  Copyright © 2018년 황윤호. All rights reserved.
//

#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
    int n, b;
    string ans="";
    cin >> n >> b;
    
    while(n>0) {
        int temp = n%b;
        if(temp < 10)
            ans += temp + '0';
        else
            ans += temp - 10 + 'A';
        n/=b;
    }
    reverse(ans.begin(), ans.end());
    cout<<ans;
}
