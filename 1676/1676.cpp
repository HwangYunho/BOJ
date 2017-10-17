//
//  1676.cpp
//  example
//
//  Created by hwangyunho on 2017. 10. 17..
//  Copyright © 2017년 hwangyunho. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int num, tot=0;
    
    cin>>num;
    
    tot = num/5;
    tot += num/25;
    tot += num/125;
    
    cout<<tot;
    
    return 0;
}
