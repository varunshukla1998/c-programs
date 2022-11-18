#include<iostream>
using namespace std;

class faculty
{
	int id, contact;
	char name[20], mail[20];
	
	public: 
	
	void inputdata()
	{
		cout<<"Enter Faculty ID : ";
		cin>>id;
		
		cout<<"Enter Faculty Contact : ";
		cin>>contact;
		
		fflush(stdin);
		
		cout<<"Enter Faculty Name : ";
		gets(name);		
		
		cout<<"Enter Faculty Email : ";
		gets(mail);	
	}
	
	void display()
	{
		cout<<"\nFaculty Id : "<<id;
		
		cout<<"\nFaculty Name : "<<name;
		
		cout<<"\nFaculty Contact : "<<contact;
		
		cout<<"\nFaculty Email : "<<mail;
	}
};

main()
{
	faculty f1;
	
	f1.inputdata();
	
	f1.display();
}
