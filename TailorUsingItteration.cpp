//
//  main.cpp
//  TailorUsingItteration
//
//  Created by Gorakh Chavan on 17/03/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include <iostream>
using namespace std;
double e(int x,int n)
{
    double s=1;
    for(;n>0;n--)
    {
        if(n==0)
        return 1;
        s=1+x*s/n;
    }
    
    return s;
};

int main()
{
    double z=e(3, 12);
    cout<<z<<endl;
    
   
    return 0;
}


