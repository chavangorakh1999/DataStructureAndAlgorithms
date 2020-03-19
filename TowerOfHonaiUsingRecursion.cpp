//
//  main.cpp
//  TowerOfHonaiUsingRecursion
//
//  Created by Gorakh Chavan on 18/03/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include <iostream>
using namespace std;

void toh(int n,int A,int B,int C)
{
    if(n>0)
    {
        toh(n-1,A,C,B);
        cout<<"("<<A<<","<<B<<")"<<endl;
        toh(n-1, B, A, C);
    }
}

int main()
{
    toh(50,1,2,3);
    return 0;
}
