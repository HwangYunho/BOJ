//
//  10872.cpp
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
    int num, tot=1;
    
    cin>>num;
    
    for(int i=2; i<=num;i++)
        tot*=i;
    
    cout<<tot;
    
    return 0;
}

