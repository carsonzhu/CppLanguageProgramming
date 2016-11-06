//
//  stacktp.cpp
//  shuati
//
//  Created by Min Zhu on 16/10/6.
//  Copyright © 2016年 Min Zhu. All rights reserved.
//
/*
#include "stacktp.hpp"
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    Stack<string> st;  // create an empty stack
    char ch;
    string po;
    cout << "Please enter A to add apurchase order,\n" << "P to process a PO, or Q to quit.\n";
    
    while(cin >> ch && toupper(ch) != 'Q'){
        while(cin.get() != '\n')
            continue;
        if(!isalpha(ch)){
            cout << '\a';
            continue;
        }
        switch (ch) {
            case 'A':
            case 'a':
                cout << "Enter a PO number to add: ";
                cin >> po;
                if(st.isfull())
                    cout << "stack already full\n";
                else
                    st.push(po);
                break;
            case 'P':
            case 'p':
                if(st.isempty())
                    cout << "stack already empty\n";
                else{
                    st.pop(po);
                    cout << "PO #" << po << " popped\n";
                    break;
                }
        }
        cout << "Please enter A to add a purchase order,\n" << "P to process a PO, or Q to quit.\n";
    }
    cout << "Bye\n";
    return 0;
}
