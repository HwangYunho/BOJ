//
//  10825.cpp
//  example
//
//  Created by hwangyunho on 2018. 06. 09..
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
bool cmp(Student s1, Student s2) {
    if(s1.kor==s2.kor && s1.eng==s2.eng && s1.math==s2.math) {
        return s1.name<s2.name;
    }   else if(s1.kor==s2.kor && s1.eng==s2.eng) {
        return s1.math>s2.math;
    } else if(s1.kor == s2.kor) {
        return s1.eng<s2.eng;
    }  else {
        return s1.kor > s2.kor;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    vector<Student> student(n);
    
    for(int i=0; i<n; i++) {
        cin>> student[i].name >> student[i].kor >> student[i].eng >> student[i].math;
    }
    
    sort(student.begin(), student.end(), cmp);
    
    for(auto s : student) {
        cout<<s.name<<"\n";
    }
    
    return 0;
}
