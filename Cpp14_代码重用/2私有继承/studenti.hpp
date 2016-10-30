//
//  studenti.hpp
//  私有继承
//
//  Created by Min Zhu on 16/10/29.
//  Copyright © 2016年 Min Zhu. All rights reserved.
//

#ifndef studenti_hpp
#define studenti_hpp

#include <iostream>
#include <valarray>
#include <string>
using namespace std;

class Student:private string, private valarray<double>
{
private:
    typedef valarray<double> ArrayDb;
    // private method for scores output
    ostream & arr_out(ostream & os) const;
public:
    Student():string("Null Student"), ArrayDb(){}
    explicit Student(int n):string("Nully"), ArrayDb(n){}
    Student(const string & s, int n):string(s), ArrayDb(n){}
    Student(const string & s, const ArrayDb & a):string(s), ArrayDb(a){}
    Student(const char * str, const double * pd, int n):string(str), ArrayDb(pd, n){}
    ~Student(){}
    double Average() const;
    double & operator[](int i);
    double operator[](int i) const;
    const string & Name() const;
    //friends
    //input
    friend istream & operator>>(istream & is, Student & stu); // 1 word
    friend istream & getline(istream & is, Student & stu); // 1 line
    //output
    friend ostream & operator<<(ostream & os, const Student & stu);
};


#endif /* studenti_hpp */
