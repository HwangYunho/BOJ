//
//  11004.cpp
//  example
//
//  Created by hwangyunho on 2017. 10. 25..
//  Copyright © 2017년 hwangyunho. All rights reserved.
//

#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    vector<int> a(n);
    
    for (int i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    sort(a.begin(), a.end());
    
    printf("%d\n",a[k]);
    return 0;
}

