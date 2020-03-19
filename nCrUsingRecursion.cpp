//
//  main.cpp
//  nCrUsingRecursion
//
//  Created by Gorakh Chavan on 18/03/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include <iostream>
using namespace std;
//using iteratoive and factorial function
/*
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    return fact(n-1)*n;
};
int c(int n,int r)
{
    int a,b,c;
    a=fact(n);
    b=fact(r);
    c=fact(n-r);
    return a/(b*c);
}
*/

//using recursuion

int c(int n,int r)
{
    if(r==0||n==r)
    {
        return 1;
    }
    return c(n-1,r-1)+c(n-1,r);
};
int main()
{
    cout<<c(10,5)<<endl;
    return 0;
}

