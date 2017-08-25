//
//  1003.cpp
//  example
//
//  Created by hwangyunho on 2017. 8. 25..
//  Copyright © 2017년 hwangyunho. All rights reserved.
//

#include <iostream>
using namespace std;
int zero, one;
int fibo(int n)
{
    if(n==0)
    {
        zero++;
        return 0;
    }
    else if(n==1)
    {
        one++;
        return 1;
    }
    else
        return fibo(n-1)+fibo(n-2);
}
int main()
{
    ios_base::sync_with_stdio(false);
    int cycle,num;
    cin>>cycle;
    while(cycle--)
    {
        zero=0, one=0;
        cin>>num;
        fibo(num);
        cout<<zero<<" "<<one<<"\n";
    }
    return 0;
}
