//
//  11005.cpp
//  example
//
//  Created by hwangyunho on 2017. 9. 4..
//  Copyright © 2017년 hwangyunho. All rights reserved.
//

#include <stdio.h>
int a[1000000];
int main()
{
    int n, b,c=0;
    scanf("%d%d", &n, &b);
    while(1)
    {
        if(n/b>0)
        {
            a[c]=n%b;
            n/=b;
            c++;
        }
        else
        {
            a[c]=n;
            c++;
            break;
        }
    }
    for(int i=c-1;i>=0;i--)
    {
        if(a[i]>=10)
            printf("%c", a[i]+55);
        else
            printf("%d", a[i]);
    }
    return 0;
}
