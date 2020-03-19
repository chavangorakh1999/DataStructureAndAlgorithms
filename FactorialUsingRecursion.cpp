//
//  main.cpp
//  FactorialUsingRecursion
//
//  Created by Gorakh Chavan on 16/03/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include <iostream>
using namespace std;
int fact(int a)
{
    if(a==0)
        return 1;
    else
        return fact(a-1)*a;
        
    
};

int main()
{
    int z;
    z=fact(5);
    cout<<z<<endl;
    return 0;
}
