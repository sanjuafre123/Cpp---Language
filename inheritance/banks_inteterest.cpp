#include<iostream>
using namespace std;
class RBI
{
	protected :
		float rate,rate1,rate2;
	public :
		void sbi()
		{
			cout << "Enter the rate of interest by sbi :";
			cin >>rate;
		}
		void bob()
		{
			cout << "Enter the rate of interest by sbi :";
			cin >>rate1;
		}
		void icici()
		{
			cout << "Enter the rate of interest by sbi :";
			cin >>rate2;
		}
		
};
class SBI : public RBI
{
	public :
		void get()
		{
			sbi();
			cout<<"Interest of SBI :"<< rate << endl<<endl;
		}
};
class BOB : public RBI
{
	public :
		void get()
		{
			bob();
			cout<<"Interest of BOB :"<< rate1 <<endl<<endl;
		}
};
class ICICI : public RBI
{
	public :
		void get()
		{
			icici();
			cout<<"Interest of ICICI :"<<rate2 <<endl <<endl;
		}
};
int main()
{
	SBI s1;
	s1.get();
	
	BOB b1;
	b1.get();
	
	ICICI i1;
	i1.get();
	
	return 0;
	
}
