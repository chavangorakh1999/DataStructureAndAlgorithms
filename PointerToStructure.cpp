//
//  main.cpp
//  PointerToStructure
//
//  Created by Gorakh Chavan on 01/03/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include<iostream>
using namespace std;

struct student
{
    int roll;
    int marks;
//    char name[10];
    
};

int main()
{
    struct student s={0,0};
    struct student *p=&s;
    p=new struct student[5];
    p->roll=5;
    p->marks=100;

    cout<<p->roll<<endl;
    cout<<p->marks<<endl;
    
    return 0;
}
