//
//  11651.cpp
//  example
//
//  Created by hwangyunho on 2017. 10. 23..
//  Copyright © 2017년 hwangyunho. All rights reserved.
//

//  2차원 평면 위의 점 N개가 주어진다. 좌표를 y좌표가 증가하는 순으로, y좌표가 같으면 x좌표가 증가하는 순서로 정렬한 다음 출력하는 프로그램을 작성하시오.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    
    cin >> n;
    
    vector<pair<int, int>> a(n);
    
    for(int i = 0; i < n; i++) {
        cin >> a[i].second >> a[i].first;
    }
    
    sort(a.begin(), a.end());
    
    for(int i = 0; i < n; i++) {
        cout << a[i].second << " " << a[i].first << "\n";
    }
    
    return 0;
}
