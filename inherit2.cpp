#include<iostream>
using namespace std;
class Base
{
	public:
		int x;
		
};

class derived1: virtual public Base
{
	public:
		int y;
		
};

class derived2:virtual public Base
{
	public:
		int z;
};

class derived:public derived1,public derived2
{
	public:
		int a,b;
		
};

int main()
{
	derived d;
	d.x=1;
	d.y=2;
	d.z=3;
	d.a=4;
	d.b=5;
	cout<<d.x<<"\t"<<d.y<<"\t"<<d.z<<"\t"<<d.a<<"\t"<<d.b<<endl;
	return 0;
}
