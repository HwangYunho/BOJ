//
//  1978.cpp
//  algorithm
//
//  Created by 황윤호 on 2018. 7. 5..
//  Copyright © 2018년 황윤호. All rights reserved.
//

bool isPrime(int x) {
    if(x<2) {
        return false;
    }
    
    for(int i=2; i*i <=x; i++) {
        if(x%i==0)
            return false;
    }
    return true;
}


#include <iostream>
using namespace std;

int main()
{
    int n, tot=0;
    cin>>n;
    while(n--)
    {
        int prime;
        cin>>prime;
        if(isPrime(prime)){
            tot++;
        }
    }
    cout << tot;
}
