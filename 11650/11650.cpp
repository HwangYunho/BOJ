//
//  11650.cpp
//  example
//
//  Created by hwangyunho on 2017. 10. 23..
//  Copyright © 2017년 hwangyunho. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n, x, y;
    
    cin>>n;
    vector<pair<int,int>> a(n);
    
    for( int i = 0; i < n; i++) {
        cin>>a[i].first>>a[i].second;
    }
    sort(a.begin(), a.end());
    
    for(int i =0; i < n; i++) {
        cout<< a[i].first <<" " << a[i].second << "\n";
    }
    
    return 0;
}
