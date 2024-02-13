#include<iostream>
using namespace std;
class pass1
{
	protected :
		int p1=30;
		void get()
		{
			cout << p1 << endl;
		}
};
class pass2 
{
	public :
		int p1=30;
		void get2()
		{
			cout << p1 << endl;
		}
};
class pass3 
{
	public :
		int p1=30;
		void get3()
		{

			cout << p1 << endl;
		}
};
class pass4 
{
	public :
		int p1=10;
		void get1()
		{
			cout << p1 << endl;
		}
};
class rocy : public pass1,public pass2,public pass3,public pass4
{
	public :
		void RR()
		{	
			int s;
			s = pass1::p1 + pass2::p1 + pass3::p1 + pass4::p1;
			cout << "total :" << d <<endl;
		}
};
int main()
{
	rocy R1;
	R1.RR();
	return 0;
	
}

