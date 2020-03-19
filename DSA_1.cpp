//
//  main.cpp
//  DSA__1.1
//
//  Created by Gorakh Chavan on 18/02/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//
//-------pass by adress-----------
//#include <iostream>
//using namespace std;
//void swap(int *x,int *y)//formal parameters--As only pointers can store the adress
//{ int temp;
//    temp=*x;
//    *x=*y;
//    *y=temp;
//
//
//};
//int main() {
//    int a,b;
//    a=10;
//    b=20;
//    swap(&a,&b);//actual parameters--passes the address to pointer
//    cout<<a<<" "<<b<<endl;
//
//
//    return 0;
//}
//-----Class------------>>>>>>>>>>>==>>>
//#include<iostream>
//using namespace std;
//class Rectangle
//{
//private:
//    int length;
//    int breadth;
//public:
//    Rectangle(int l, int b);
//    int area();
//    int perimeter();
//    int getlength()
//    {
//        return length;
//    }
//    void setlength(int l)
//    {
//        length=l;
//    }
//
//};
//Rectangle::Rectangle(int l,int b)
//{
//    length=l;
//    breadth=b;
//
//}
//int Rectangle::area()
//{
//    return length*breadth;
//}
//int Rectangle::perimeter()
//{
//    return 2*(length+breadth);
//}
//int main()
//{
//    Rectangle r(10,15);
//    cout<<r.area()<<endl;
//    cout<<r.perimeter()<<endl;
//
//    r.setlength(5);
//    cout<<r.getlength()<<endl;
//
//    return 0;
//
//
//
//}
//#include<iostream>
//using namespace std;
//template<class T>
//class Rectangle
//{
//private:
//   T length;
//   T breadth;
//public:
//    Rectangle(T l, T b);
//    T area();
//    T perimeter();
//    T getlength()
//   {
//        return length;
//   }
//
//    void setlength(T l)
//    {
//        length=l;
//    }
//
//};
//template<class T>
// Rectangle<T>::Rectangle(T l,T b)
//{
//    length=l;
//    breadth=b;
//
//}
//template<class T>
//T Rectangle<T>::area()
//{
//    return length*breadth;
//}
//template<class T>
//T Rectangle<T>::perimeter()
//{
//    return 2*(length+breadth);
//}
//int main()
//{
//    Rectangle<float> r(10.5,15.45);
//    cout<<r.area()<<endl;
//    cout<<r.perimeter()<<endl;
//
//   r.setlength(5);
//   cout<<r.getlength()<<endl;
//
//   return 0;

//}
#include<iostream>
using namespace std;
void fun1(int n)
{
    if(n>0)
    {
        fun1(n-1);
        cout<<n<<" ";
        
    }
}
int main()
{
    int x=3;
    fun1(x);
    
    return 0;
}
