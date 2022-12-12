#include<iostream>
using namespace std;
class student
{
	
	int no;
	char name[20];
	string contact;
	
	public:
		student();
		void display();
		
};

student::student()
{
	cout<<"Enter roll no    : ";
	cin>>no;
	
	fflush(stdin);
	
	cout<<"Enter Name       : ";
	cin>>name;
	
	cout<<"Enter Contact no : ";
	cin>>contact;
	
};

void student::display()
{
	cout<<endl<<"Roll No : "<<no<<" | Name : "<<name<<" | Contact : "<<contact<<endl;
}

main()
{
	student s;
	s.display();
}
