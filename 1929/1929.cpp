//
//  1929.cpp
//  algorithm
//
//  Created by 황윤호 on 2018. 7. 5..
//  Copyright © 2018년 황윤호. All rights reserved.
//

#include <iostream>
using namespace std;
const int MAX = 1000000;
bool check[MAX+1];

int main()
{
    check[0]=check[1]=true;
    for(int i=2; i*i<=MAX; i++){
        if(!check[i]){
            for(int j=i+i; j<=MAX; j+=i)
                check[j]=true;
        }
    }
    
    int n, m;
    cin>>n>>m;
    for(int i=n;i<=m;i++){
        if(!check[i])
            cout<<i<<"\n";
    }
}
