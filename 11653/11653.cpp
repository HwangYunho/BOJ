//
//  11653.cpp
//  example
//
//  Created by hwangyunho on 2017. 10. 16..
//  Copyright © 2017년 hwangyunho. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    
    cin>> n;
    
    for (int i=2; i*i <= n; i++) {
        while (n%i == 0) {
            printf("%d\n",i);
            n /= i;
        }
    }
    if (n > 1) {
        printf("%d\n",n);
    }
    return 0;
}
