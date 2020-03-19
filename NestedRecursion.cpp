//
//  main.cpp
//  NestedRecursion
//
//  Created by Gorakh Chavan on 01/03/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//
#include<iostream>
using namespace std;

int fun(int n)
{
    if(n>100)
        return n-10;
    else
        return fun(fun(n+11));
        
    
}
int main()
{
    int z;
    z=fun(250);
    cout<<z<<endl;
    return 0;
    
}
