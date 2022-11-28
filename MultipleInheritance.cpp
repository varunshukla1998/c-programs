#include<iostream>
using namespace std;

class base1 // Parent Class 1
{
	private:
		int a,b,c;
		
	public:
		
		void input()
		{
			cout<<"\n Enter Numbers : "<<endl;
			cin>>a>>b;
		}
		
		void display()
		{
			c=a+b;
			cout<<"\n Sum = "<<c<<endl;
		}
};

class base2 // Parent Class 2
{
	private:
		int a,b,c;
		
	public:
		
		void input1()
		{
			cout<<"\n Enter Numbers : "<<endl;
			cin>>a>>b;
		}
		
		void display1()
		{
			c=a-b;
			cout<<"\n Sub = "<<c<<endl;
		}
};

class derived : public base1,public base2 // Child Class which inherit parenrt class 1 and class 2
{
	private:
		int a,b,c;
		
	public:
		
		void input2()
		{
			cout<<"\n Enter Numbers : "<<endl;
			cin>>a>>b;
		}
		
		void display2()
		{
			c=a*b;
			cout<<"\n Mul = "<<c<<endl;
		}
 };
 
 main()
 {
 	derived d; // Creating object of child class
 	
 	d.input();
 	d.display();
 	
 	d.input1();
 	d.display1();
 	
 	d.input2();
 	d.display2();
 }
