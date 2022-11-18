#include<iostream>
using namespace std;

class student
{
	int id;
	char name[20];
	
	public: 
	
	void inputdata()
	{
		cout<<"Enter ID : ";
		cin>>id;
		
		fflush(stdin);
		
		cout<<"Enter Name : ";
		gets(name);	
	}
	
	void display()
	{
		cout<<"\nId : "<<id;
		
		cout<<"\nName : "<<name;
	}
};

main()
{
	student s1;
	
	s1.inputdata();
	
	s1.display();
}
