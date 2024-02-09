#include<iostream>
using namespace std;
class A
{
	protected:
		int a;
	
		void set()
		{
			cout << "Enter the first value of  : ";
			cin	>> a;
		}
};
class B 
{
	protected:
		int a;
		void set()
		{
			cout << "Enter the second value of : ";
			cin	>> a;
		}
};
class c : public A,B
{

	public :
	void get()
	{
		A::set();
		B::set();
		
		cout << endl << "a : " << A::a;
		
		cout << endl << "B : " << B::a;
	}
};
int main()
{
	c C1;
	C1.get();
	return 0;
}
