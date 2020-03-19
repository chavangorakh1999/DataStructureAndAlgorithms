//
//  main.cpp
//  SineSeriesUsingRecursion
//
//  Created by Gorakh Chavan on 17/03/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include <iostream>
using namespace std;
int factorial(int n)
{
    if(n==0)
        return 1;
    else if (n==1)
        return 1;
    else
        return (n*factorial(n-1));
};
int pow(int m, int n)
{
    if (n==0)
        return 1;
    if (n%2==0)
        return pow(m*m,n/2);
    else
        return m*pow(m*m, (n-1)/2);
    
};

float sine(float an, int n)
{
    float val=0;
    if (an==0)
        return 0;
    else if(n>=0)

    { if(n%2==1)
            val=(sine(an,n-2) - pow(an,n)/factorial(n)) * pow(-1,n);
        else
            val=(sine(an,2*n-1) - pow(an,2*n+1)/factorial(2*n+1)) *-1 ;

    }
    return val;
};

int main() {
    int z;
    z=sine(30.2,5);
    cout<<z;
    return 0;
}
