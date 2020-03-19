//
//  main.cpp
//  FunctionsInCpp
//
//  Created by Gorakh Chavan on 02/03/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include <iostream>
using namespace std;
int add(int a, int b)
{
    int c;
    c=a+b;
    return c;
}

int main()
{
    int x,y,z;
    x=10;
    y=5;
    z=add(x,y);
    cout<<z<<endl;
    return 0;
    
}
