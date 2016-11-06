//
//  stcktp1.cpp
//  shuati
//
//  Created by Min Zhu on 16/10/6.
//  Copyright © 2016年 Min Zhu. All rights reserved.
//

#include "stcktp1.hpp"
#include <iostream>
//#include <stdlib.h> // for rand(), srand()
#include <cstdlib> // for rand(), srand()
#include <ctime>   // for time()
using namespace std;

const int Num = 10;
int main(){
    srand(time(0)); // randomize rand()
    cout << "Please enter stack size: ";
    int stacksize;
    cin >> stacksize;
    // create an empty stack with stacksize slots
    Stack<const char *> st(stacksize);
    
    //in basket
    const char * in[Num] = {
        " 1: Hank Gilgamesh", " 2: Kiki Ishtar",
        " 3: Betty Rocker", " 4: Ian Flagranti",
        " 5: Wolfgang Kibble", " 6: Portia Koop",
        " 7: Joy Almondo", " 8: Xaverie paprika",
        " 9: Juan Moore", "10: Misha Mache"
    };
    //out basket
    const char * out[Num];
    
    int processed = 0;
    int nextin = 0;
    while(processed < Num){
        if(st.isempty())
            st.push(in[nextin++]);
        else if(st.isfull())
            st.pop(out[processed++]);
        else if(rand() % 2 && nextin < Num) //50-50 chance
            st.push(in[nextin]);
        else
            st.pop(out[processed++]);
    }
    for(int i = 0; i < Num; i++)
        cout << out[i] << endl;
        
    cout << "Bye\n";
    return 0;
}


