//
//  main.cpp
//  StaticFnInRecursion
//
//  Created by Gorakh Chavan on 20/02/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include <iostream>
using namespace std;

int fun(int n)
{
    static int x=0;
    if(n>0)
    {
        x++;
        return fun(n-1)+x;
    }
    return 0;
}

int main()
{
    int x;
    x=fun(5);
    cout<<x<<endl;
   
    return 0;
}
