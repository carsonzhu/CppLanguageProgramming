//
//  use_stuc.cpp
//
//  用于测试新的Student类。该程序使用一个只包含3个Student对象的数组，其中每个对象保存5个考试成绩。
//  另外使用一个不复杂的输入循环，不验证输入，也不让用户中途退出。
//
//  Created by Min Zhu on 16/10/24.
//  Copyright © 2016年 Min Zhu. All rights reserved.
//

#include <iostream>
#include "studentc.hpp"
using namespace std;

void set(Student & sa, int n );
const int pupils = 3;
const int quizzes = 5;

int main()
{
    Student ada[pupils] = {Student(quizzes), Student(quizzes), Student(quizzes)};
    
    int i;
    for(i=0; i<pupils; ++i)
        set(ada[i], quizzes);
    cout << "\nStudent List:\n";
    for(i=0; i<pupils; ++i)
        cout << ada[i].Name() << endl;
    cout << "\nReasults:";
    for(i=0; i<pupils; ++i)
    {
        cout << endl << ada[i];
        cout << "average: " << ada[i].Average() << endl;
    }
    cout << "Done.\n";
    return 0;
}

void set(Student & sa, int n)
{
    cout << "Please enter the student's name: ";
    getline(cin, sa);
    cout << "Please enter " << n << " quiz scores:\n";
    for(int i=0; i<n; i++)
        cin >> sa[i];
    while(cin.get() != '\n')
        continue;
}
