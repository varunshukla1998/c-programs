#include<iostream>
using namespace std;
main()
{
	int choice;
	char ch;
	
	cout<<"\n \n choice 1 is for a ";
	cout<<"\n \n choice 2 is for e ";
	cout<<"\n \n choice 3 is for i ";
	cout<<"\n \n choice 4 is for o ";
	cout<<"\n \n choice 5 is for u ";
	
	cout<<"\n \n Enter character :  ";
	cin>>ch;
	
	cout<<"\n \n Enter Your Choice ";
	cin>>choice;
	
	switch(choice)
	{
		case 1: 
				if(ch=='a') 
				{
					cout<<"\n \n Entered character is Vowel ";
				}

				break;	
				
		case 2: 
				if(ch=='e')
				{
					cout<<"\n \n Entered character is Vowel ";
				}
				
				break;
		
		case 3: 
				if(ch=='i')
				{
					cout<<"\n \n Entered character is Vowel ";
				}
				
				break;
				
		case 4: 
				if(ch=='o')
				{
					cout<<"\n \n Entered character is Vowel ";
				}
				
				break;
				
		case 5: 
				if(ch=='u')
				{
					cout<<"\n \n Entered character is Vowel ";
				}
				
				break;
				
		default:
				cout<<"\n \n Entered character is Consonent ";
				break;
		
	}
}
