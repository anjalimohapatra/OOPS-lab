#include<iostream>
using namespace std;

class base1
{
    int t;
    public:
        base1()
        {
            t=0;
            cout<<"Default base 1\n";
        }
        base1(int z)
        {
            t=z;
            cout<<"Base class 1\n";
        }
};

class base2
{   
    int a,b,c;
    public:
        base2()
        {
            a=0;
            b=0;
            c=0;
            cout<<"Default base 2\n";
        }
        base2(int x,int y,int z)
        {
            a=x;
            b=y;
            c=z;
            cout<<"Base class 2\n";
        }
};

class derived:public base1,public base2
{
    int a,b,c,d;
    public:
        derived(int x):base1(x)
        {
            a=x;
            cout<<"Derived base constructor\n";
        }
        derived(int x,int y,int z):base2(x,y,z)
        {
            b=x;
            c=y;
            d=z;
            cout<<"Derived base constructor\n";
        }
};

int main()
{
    derived D1(1);
    derived D2(2,3,4);
    return 0;
}
