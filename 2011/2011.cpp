//
//  2011.cpp
//  example
//
//  Created by hwangyunho on 2017. 9. 2..
//  Copyright © 2017년 hwangyunho. All rights reserved.
//

#include <iostream>
using namespace std;
int d[5001];
int mod = 1000000;
int main() {
    string s;
    cin >> s;
    int n = s.size();
    s = " " + s;
    d[0] = 1;
    for (int i=1; i<=n; i++) {
        int x = s[i] - '0';
        if (1 <= x && x <= 9) {
            d[i] += d[i-1];
            d[i] %= mod;
        }
        if (i==1) {
            continue;
        }
        if (s[i-1] == '0') {
            continue;
        }
        x = (s[i-1]-'0')*10 + (s[i]-'0');
        if (10 <= x && x <= 26) {
            d[i] += d[i-2];
            d[i] %= mod;
        }
    }
    cout << d[n] << '\n';
    return 0;
}
