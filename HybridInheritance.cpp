#include<iostream>
using namespace std;

class parent // Parent class 1
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

class child1 : public parent  // Child class 1 
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

class child2 : public parent // Child class 2
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
 
 class grandchild1 : public child1, public child2 // GrandChild class 1
{
	private:
		int a,b,c;
		
	public:
		
		void input3()
		{
			cout<<"\n Enter Numbers : "<<endl;
			cin>>a>>b;
		}
		
		void display3()
		{
			c=a/b;
			cout<<"\n Div = "<<c<<endl;
		}
 };
 
 int main()
 {
 	grandchild1 gc;
 	
 	gc:input();
 	gc:display();
 	
 	gc.input1();
 	gc.display1();
 	
 	gc.input2();
 	gc.display2();
 	
 	gc.input3();
 	gc.display3();
 }
