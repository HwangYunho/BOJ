//
//  2609.cpp
//  example
//
//  Created by hwangyunho on 2018. 6. 29..
//  Copyright © 2018년 hwangyunho. All rights reserved.
//

#include <iostream>
using namespace std;
int gcd(int n1, int n2) {
    while(n2!=0){
        int r =n1 % n2;
        n1 = n2;
        n2 =r;
    }
    return n1;
}

int lcm (int n1, int n2) {
    int g = gcd(n1,n2);
    return g * (n1/g) * (n2/g);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout<<gcd(a,b) << "\n" << lcm(a,b);
    return 0;
}
