//
//  main.cpp
//  PowerUsingRecursion
//
//  Created by Gorakh Chavan on 16/03/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include <iostream>
using namespace std;
//simple solution to power
int power(int m,int n)
{
    if(n==0)
        return 1;
    else
        return power(m,n-1)*m;
    
};
//Efficiant way to reduce stack memory avoiding stack overflow
int effpower(int m, int n)
{
    if (n==0)
        return 1;
    if (n%2==0)
        return effpower(m*m,n/2);
    else
        return m*effpower(m*m, (n-1)/2);
    
};

int main()
{
    int z,b;
    z=power(2,10);
    b=effpower(2, 10);
    cout<<z<<endl;
    cout<<b<<endl;
    
    return 0;
}
