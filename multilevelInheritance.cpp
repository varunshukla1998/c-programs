#include<iostream>
using namespace std;

// This is a parent class
class parent{
	
	public:
		
	int num1;
	
	// Getting number1
	void getdata()
	{
		cout<<"Enter Number1 : ";
		cin>>num1;
	}
};

// This is a child class which extends parent class
class child1: public parent{
	
	public:
		
	int num2;
	
	// Getting number2
	void setdata()
	{
		cout<<"Enter Number2 : ";
		cin>>num2;
	}
};

// This is another child class which extends child1 class (with properties of parent class
class child2: public child1{
	
	public:
		
	int num3;
	
	// Getting number3
	void setdata1()
	{
		cout<<"Enter Number3 : ";
		cin>>num3;
	}
	
	// Multiplying 3 numbers and Displaying the Output
	void multiply()
	{
		int ans;
		
		ans=num1*num2*num3;
		
		cout<<"Multiplication : "<<ans;
	}
};

// Calling all the functions using object
main()
{	
	// Creating Object of child2 class
	child2 c2;
	
	// Calling all classes function using child2 Class object
	c2.getdata();
	c2.setdata();
	c2.setdata1();
	c2.multiply();
}
