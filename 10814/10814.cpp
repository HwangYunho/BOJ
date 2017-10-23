//
//  10814.cpp
//  example
//
//  Created by hwangyunho on 2017. 10. 23..
//  Copyright © 2017년 hwangyunho. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

struct Member {
    int age;
    string name;
    int order;
};

bool compareMember(Member a, Member b) {
    if(a.age == b.age) {
        return a.order < b.order;
    } else {
        return a.age < b.age;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    
    vector<Member> m(n);
    
    for(int i = 0; i < n; i++) {
        cin >> m[i].age >> m[i].name;
        m[i].order = i;
    }
    
    sort(m.begin(), m.end(), compareMember);
    
    for(auto p : m) {
        cout<< p.age << " " << p.name << "\n";
    }
    return 0;
}
