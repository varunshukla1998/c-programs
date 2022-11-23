#include<iostream>
using namespace std;

class parent{
	
	public:
		
	int num1;
	
	void getdata()
	{
		cout<<"Enter Number1 : ";
		cin>>num1;
	}
};

class child: public parent{
	
	public:
		
	int num2;
	
	void setdata()
	{
		cout<<"Enter Number2 : ";
		cin>>num2;
	}
	
	void multiply()
	{
		int ans;
		ans=num1*num2;
		cout<<"Multiplication : "<<ans;
	}
};

main()
{
	child c;
	c.getdata();
	c.setdata();
	c.multiply();
}
