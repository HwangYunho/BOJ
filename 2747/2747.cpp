//
//  2747.cpp
//  example
//
//  Created by hwangyunho on 2017. 8. 25..
//  Copyright © 2017년 hwangyunho. All rights reserved.
//

#include <iostream>
using namespace std;
int fibo[46];
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    fibo[0]=0, fibo[1]=1;
    for(int i=2;i<=n;i++)
        fibo[i]=fibo[i-2]+fibo[i-1];
    cout<<fibo[n]<<"\n";
    return 0;
}
