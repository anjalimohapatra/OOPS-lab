#include <iostream>
using namespace std;
class staff
{
	protected:
		long id,phone;
	public:
	    void input()
		{
			cout<<"enter id and phone"<<endl;
			cin>>id>>phone;
		}	
		void display()
		{
			cout<<"id="<<id<<"\n"<<"phone="<<phone<<endl;
		}
};
class teacher: public staff
{
	protected:
	int years_of_experience;
	public:
		void input1()
		{
			cout<<"enter years\n";
			cin>>years_of_experience;
		}
		void display2()
		{
			cout<<"years="<<years_of_experience<<endl;
		}
		
};
class officer: public staff
{
	protected:
		char grade;
	public:
	    void input3()
		{
			cout<<"enter grade\n";
			cin>>grade;
		}	
		void display3()
		{
			cout<<"grade="<<grade<<endl;
		}
		
};
class regular: public teacher
{
	protected:
		double basic_pay,da,hra,gross;
	public:
	    regular(double a)	
	    {
	    	basic_pay=a;
		}
		void calculate()
		{
			da=1.5*basic_pay;
			hra=0.2*basic_pay;
			gross=basic_pay+da+hra;
			
		}
		void display4()
		{
			cout<<"gross="<<gross<<endl;
		}
};
class contract:public teacher
{
	protected:
		double pay_consolidated;
		int contract_duration_months;
	public:
	    void input4()
		{
			cout<<"enter payconsole and contract duration"<<endl;
			cin>>pay_consolidated>>contract_duration_months;
		
	    }	
	    void display5()
	    {
	    	cout<<pay_consolidated<<"\n"<<contract_duration_months;
		}
};

int main()
{
	double pay;
	cout<<"enter basic pay:"<<endl;
	cin>>pay;
	regular R(pay);
	R.calculate();
	staff s;
	s.input();
	teacher t;
	t.input1();
	officer o;
	o.input3();
	s.display();
	t.display2();
	o.display3();
	R.display4();

return 0;	
}
