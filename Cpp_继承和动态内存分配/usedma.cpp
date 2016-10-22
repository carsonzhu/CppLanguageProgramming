//
//  usedma.cpp
//  C++ primier plus
//
//  Created by Min Zhu on 16/10/22.
//  Copyright © 2016年 Min Zhu. All rights reserved.
//

#include <iostream>
#include "dma.hpp"

int main()
{
    using std::cout;
    using std::endl;
    baseDMA shirt("Portabelly", 8);
    lacksDMA balloon("red","Blimpo",4);
    hasDMA map("Mercator", "Buffalo Keys", 5);
    cout << "Displaying baseDMA object:\n";
    cout << shirt <<endl;
    cout << "Display lacksDMA object:\n";
    cout << balloon;
    cout << "Display hasDMA object:\n";
    cout << map;
    lacksDMA balloon2(balloon);
    cout << "Result of lacksDMA copy;\n";
    cout << balloon2 << endl;
    hasDMA map2;
    map2 = map;
    cout << "Result of hasDMA assignment:\n";
    cout << map2 << endl;
    return 0;
}
