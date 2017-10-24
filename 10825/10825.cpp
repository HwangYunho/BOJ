//
//  10825.cpp
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

struct Student {
    string name;
    int kor;
    int eng;
    int math;
};

bool compareS(Student a, Student b) {
    if(a.kor > b.kor) {
        return a.kor > b.kor;
    }
    else if(a.kor == b.kor) {
        if(a.eng < b.eng) {
            return a.eng < b.eng;
        }else if(a.eng == b.eng)
        {
            if(a.math > b.math)
            {
                return a.math > b.math;
            } else if(a.math == b. math) {
                return a.name < b.name;
            }
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    
    vector<Student> s(n);
    for(int i = 0; i < n; i++) {
        cin >> s[i].name >> s[i]. kor >> s[i].eng >> s[i].math;
    }
    
    sort(s.begin(), s.end(), compareS);
    
    for(auto p : s) {
        cout<< p.name << "\n";
    }
    return 0;
}
