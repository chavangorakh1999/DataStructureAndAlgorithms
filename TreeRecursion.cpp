//
//  main.cpp
//  TreeRecursion
//
//  Created by Gorakh Chavan on 21/02/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include <iostream>
using namespace std;
void fun(int n)
{
    if (n>0)
    {
        cout<<n<<" ";
        fun(n-1);
        fun(n-1);
    }
}

int main() {
    int x=3;
    fun(x);
    return 0;
    
}
