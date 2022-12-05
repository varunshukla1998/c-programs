#include<iostream>
using namespace std;
class parent
{
	public:
		
		void display()
		{
			cout<<"\n Hello A \n";
		}
};

class child : public parent
{
	public:
		
		void display()
		{
			parent::display();
			cout<<"\n Hello B \n";
		}
		
		
};

main()
{
	child c;
	
	c.display();
}
