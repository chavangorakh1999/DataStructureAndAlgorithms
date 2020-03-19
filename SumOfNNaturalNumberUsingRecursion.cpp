//
//  main.cpp
//  SumOfNNaturalNumberUsingRecursion
//
//  Created by Gorakh Chavan on 02/03/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include <iostream>
using namespace std;

int fun(int n)
{
    if(n==0)
        return 0;
    else
        return fun(n-1)+n;
}
int main()
{
    int z;
    z=fun(100);
    cout<<z<<endl;
    return 0;
    
}
