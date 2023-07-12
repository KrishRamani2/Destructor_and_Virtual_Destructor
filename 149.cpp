#include<iostream>
using namespace std;
    
class Base
{
    public:
    Base()
    {cout<<"Base Constructor"<<endl;}
	virtual ~Base()
	{
	    cout<<"Destructor of Base"<<endl;
	}
	
};
    
class Derived:public Base
{
    public:
    Deived()
    {cout<<"Derived Constructor"<<endl;}
	~Derived()
	{
		cout<<"Destructor of Derived"<<endl;
	}
    };
    
    
void fun()
{
	Base *p=new Derived();
	delete p;
}
    
int main()
{
	fun();
}
    