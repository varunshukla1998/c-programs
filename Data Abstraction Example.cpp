#include<iostream>
using namespace std;

class RBI
{
	public:
		virtual void roi()=0;
		//ROI is rate of interest
};

class SBI : public RBI
{
	public:
		void roi()
		{
			cout<<"SBI ROI is : 8.5 "<<endl;
		}
};

class HDFC : public RBI
{
	public:
		void roi()
		{
			cout<<"HDFC ROI is : 9.5 "<<endl;
		}
};

main()
{
	SBI s;
	HDFC h;
	
	s.roi();
	h.roi();
}
