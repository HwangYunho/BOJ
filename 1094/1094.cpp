//
//  1094.cpp
//  example
//
//  Created by hwangyunho on 2017. 8. 31..
//  Copyright © 2017년 hwangyunho. All rights reserved.
//

#include <iostream>
using namespace std;
int a[8]={64,32,16,8,4,2,1,0};
int main()
{
    ios_base::sync_with_stdio(false);
    int n,i=0,tot=0,c=0;
    cin>>n;
    if(n==64)
        c=1;
    else{
        while(n!=tot)
        {
            i++;
            if(n==a[i])
            {
                c=1;
                break;
            }
            else if(n>=tot+a[i])
            {
                tot+=a[i];
                c++;
            }
        
        }
    }
    cout<<c<<"\n";
    return 0;
}
