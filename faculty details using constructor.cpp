#include<iostream>
using namespace std;
class faculty
{
	
	int id;
	char name[20], mail[40];
	string contact;
	
	public:
		faculty();
		void display();
		
};

faculty::faculty()
{
	cout<<"Enter id           : ";
	cin>>id;
	
	fflush(stdin);
	
	cout<<"Enter Name         : ";
	cin>>name;
	
	cout<<"Enter E-mail       : ";
	cin>>mail;
	
	cout<<"Enter Contact no   : ";
	cin>>contact;
	
};

void faculty::display()
{
	cout<<endl<<"ID No : "<<id<<" | Name : "<<name<<" | Email : "<<mail<<" | Contact : "<<contact<<endl;
}

main()
{
	faculty f;
	f.display();
}
