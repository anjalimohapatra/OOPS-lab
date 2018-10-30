#include<iostream> 
using namespace std; 
  
class base;  
  
class derived1 
{ 
  public: 
    derived1() 
	{ cout << "derived1 constructor" << endl; } 
friend class base; 
};  
  
class base : virtual derived1
{ 
public: 
    base() 
	{ cout << "base constructor" << endl; } 
}; 
  
class Derived : public base
{ 
public: 
    Derived() { cout << "Derived constructor" << endl; } 
}; 
  
int main() 
{ 
    Derived d; 
    return 0; 
} 
