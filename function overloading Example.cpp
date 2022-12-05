#include<iostream>
using namespace std;
class student
{
	public:
		
		void display(int a)
		{
			cout<<" A in first function  : "<<a<<endl;
		}
		
		void display(int a, float f)
		{
			cout<<" A in second function : "<<a<<endl;
			cout<<" F in second function : "<<f<<endl;
		}
};

main()
{
	student s;
	
	s.display(5);
	s.display(20,30.5);
}
