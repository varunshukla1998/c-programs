#include<iostream>
using namespace std;

class compare
{
	char str1[20], str2[20], str;
	
	public: 
	
	void CompareStr()
	{	
		cout<<"Enter str1 Name : ";
		gets(str1);		
		
		cout<<"Enter str2 Name : ";
		gets(str2);
		
		str= strcmp(str1,str2);
		
	}
	
	void display()
	{	
		if(str!=0){
			cout<<"\nString is equal";
		}
		else{
			cout<<"\nString is equal";
		}
	}
};

main()
{
	compare c1;
	
	c1.CompareStr();
	
	c1.display();
}
