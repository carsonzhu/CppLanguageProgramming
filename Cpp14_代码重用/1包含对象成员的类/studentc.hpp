//
//  studentc.hpp
//  --defining a Student class using containment
//  Student类的定义，其中所有构造函数都被定义为内联的：它还提供了用于输入和输出的友元函数
//
//  Created by Min Zhu on 16/10/24.
//  Copyright © 2016年 Min Zhu. All rights reserved.
//

#ifndef studentc_hpp
#define studentc_hpp

#include <iostream>
#include <string>
#include <valarray>
using namespace std;

class Student
{
private:
    typedef valarray<double> ArrayDb;
    string name;  // contained object
    ArrayDb scores;  // contained object
    // private method for scores output
    ostream & arr_out(ostream & os) const;
public:
    Student(): name("Null Student"), scores(){}
    explicit Student(const string & s): name(s), scores(){}
    explicit Student(int n): name("Nully"), scores(n){}
    Student(const string & s, int n): name(s), scores(n){}
    Student(const string & s, const ArrayDb & a): name(s), scores(a){}
    Student(const char * str, const double * pd, int n): name(str), scores(pd, n){}
    ~Student(){}
    double Average() const;
    const string & Name() const;
    double & operator[](int i);
    double operator[](int i) const;
    // friends
    // input
    friend istream & operator>>(istream & is, Student & stu);  // 1 word
    friend istream & getline(istream & is, Student & stu);  // 1 line
    // output
    friend ostream & operator<<(ostream & os, const Student & stu);
};

#endif /* studentc_hpp */
