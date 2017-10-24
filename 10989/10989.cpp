//
//  10989.cpp
//  example
//
//  Created by hwangyunho on 2017. 10. 24..
//  Copyright © 2017년 hwangyunho. All rights reserved.
//

#include <cstdio>
#include <string.h>
#define MAX 10001
int main()
{
    int cnt[MAX], n, input;
    memset(cnt, 0, 10001 * sizeof(int));
    
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &input);
        cnt[input]+=1;
    }
    for(int i = 1; i < MAX; i++) {
        for(int j = 0; j < cnt[i]; j++) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}

