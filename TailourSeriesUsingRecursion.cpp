//
//  main.cpp
//  TailourSeriesUsingRecursion
//
//  Created by Gorakh Chavan on 17/03/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include <iostream>
using namespace std;
double e(int x, int n)
{
    static double p=1,f=1;
    double r;
    if(n==0)
        return 1;
    r=e(x,n-1);
    p=p*x;
    f=f*n;
    return r+(p/f);
    
};

int main()
{
    double z=e(4,12);
    cout<<z<<endl;
   
    return 0;
}
