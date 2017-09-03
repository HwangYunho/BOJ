//
//  1934.cpp
//  example
//
//  Created by hwangyunho on 2017. 9. 3..
//  Copyright © 2017년 hwangyunho. All rights reserved.
//

#include <iostream>
using namespace std;
int GCD(int a,int b)
{
    
    if (b > a)
        return GCD(b,a);
    if (b == 0)
        return a;
    return GCD(b, a%b);
}
int main() {
    ios_base::sync_with_stdio(false);
    int A, B, T, gcd;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> A >> B;
        gcd = GCD(A, B);
        if (GCD(A, B) == 1)
            cout << A*B << '\n';
        else
            
            cout << gcd * (A / gcd) * (B / gcd) << '\n';
    }
}
