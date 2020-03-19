//
//  main.c
//  DsaUsingC
//
//  Created by Gorakh Chavan on 20/02/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include <stdio.h>
void fun(int n){
    if (n>0){
        printf("%d",n);
        fun(n-1);
    }
}

int main(){
    int x=3;
    fun(x);
    
    
    
};

