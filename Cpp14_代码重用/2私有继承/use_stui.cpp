//
//  use_stui.cpp
//
//  用于测试新的Student类。由于两个版本的Student类的共有接口完全相同，因此可以使用同一个程序进行测试，
//  即与前面use_stuc.cpp基本相同
//
//  Created by Min Zhu on 16/10/29.
//  Copyright © 2016年 Min Zhu. All rights reserved.
//

#include <iostream>
#include "studenti.hpp"
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
