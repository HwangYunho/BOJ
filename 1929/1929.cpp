//
//  1929.cpp
//  example
//
//  Created by hwangyunho on 2017. 9. 6..
//  Copyright © 2017년 hwangyunho. All rights reserved.
//

#include <iostream>
using namespace std;
bool is_prime(int x)
{
    if (x < 2) {
        return false;
    }
    for (int i=2; i*i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    ios_base::sync_with_stdio(false);
    int m,n;
    cin >>m>>n;
    for (int i=m; i<=n; i++) {
        if (is_prime(i))
            cout<<i<<'\n';
    }
    return 0;
}
