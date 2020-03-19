#include<iostream>
using namespace std;

struct rectangle
{
	int length,breadth;
	
};

int main()
{
	struct rectangle r={10,5};
	struct rectangle *p=&r;
	p=new struct rectangle[5];
	p->length=20;
	cout<<p->length;
	

	p->length=20;
	return 0;
}