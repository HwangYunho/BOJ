//
//  2609.cpp
//  example
//
//  Created by hwangyunho on 2017. 8. 31..
//  Copyright © 2017년 hwangyunho. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int a,b,c=2,ma=1,mi=1;
    cin>>a>>b;
    while(1)
    {
        if((c>a) || (c>b))
            break;
        if((a%c==0) && (b%c==0))
        {
            a=a/c;
            b=b/c;
            ma*=c;
            mi*=c;
        }
        else
            c++;
    }
    mi*=a*b;
    cout<<ma<<"\n"<<mi<<"\n";
    return 0;
}
