//
//  main.cpp
//  FibonacciUsingRecursion
//
//  Created by Gorakh Chavan on 17/03/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include <iostream>
using namespace std;
//recursive functiomn for fabonacci
int fab(int n)
{
  if(n<=1)
      return n;
  else
      return fab(n-2)+fab(n-1);
};
//itterative function for fibonacci
int ifab(int n)
{
    int t0=0,t1=1,s=0;
    if(n<=1)
        return n;
    for(int i=2;i<=n;i++)
    {
        s=t0+t1;
        t0=t1;
        t1=s;
        
    }
    return s;
    
    
};
//memoization method using recursion

long long int f[60];
long long int mfab(int n)
{
    if(n<=1)
    {
        f[n]=n;
        return n;
    }
    else
    {
        if(f[n-2]==-1)
            f[n-2]=mfab(n-2);
        if(f[n-1]==-1)
            f[n-1]=mfab(n-1);
        return mfab(n-2)+mfab(n-1);
    }
    
};
int main()
{
    for(int i=0;i<=60;i++)
    {
        f[i]=-1;
    }
    long long int z;
    z=mfab(50);
    cout<<z<<endl;
    
    return 0;
}
