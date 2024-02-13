//4 WAP to solve ambiguity error.
#include<iostream>
using namespace std;

class A
{
	protected :
		int a;
		void set()
		{
			cout << "Enter the value of A : ";
			cin >> a;
		}
};
class B
{
	protected :
		int a;
		void set()
		{
			cout << "Enter the value of B : ";
			cin >> a;
		}
};
class C : public A,public B
{
	public :
		int sum;
		void get()
		{
			A :: set();
			B :: set();
			
			sum = A::a + B::a;
			cout<< "Sum is : " << sum << endl;
		}
};

int main()
{
	C c1;
	c1.get();
	
	
	return 0;
}


