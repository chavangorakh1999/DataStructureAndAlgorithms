//
//  main.cpp
//  TailorUsingHornerRule
//
//  Created by Gorakh Chavan on 17/03/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include <iostream>
using namespace std;
double e(int x, int n)
{  static double s=1;
    if(n==0)
        return s;
    s=1+x*s/n;
    return e(x, n-1);
    
};

int main()
{
    double z=e(3, 12);
    cout<<z<<endl;
   
    return 0;
}
