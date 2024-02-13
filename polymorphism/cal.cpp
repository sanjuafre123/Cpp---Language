#include<iostream>
using namespace std;
class A
{
	protected :
		int a,b,c,d,e;
};
class B :public A
{
	public :
		void calculate(int a,int b)
		{
			cout << " division is :"<< a/b <<endl;
		}
		void calculate(int a,int b,int c)
		{
			cout << "Addition is :"<< a+b+c<<endl;
		}
		void calculate(int a,int b,int c,int d)
		{
			cout << "subtraction is :"<< a-b-c-d<<endl;
		}
		void calculate(int a,int b,int c,int d,int e)
		{
			cout << "multiplication is :"<< a * b * c * d * e<<endl;
		}
};
int main()
{
	B b1;
	b1.calculate(20,10);
	b1.calculate(10,20,30);
	b1.calculate(40,20,10,5);
	b1.calculate(1,2,3,4,5);
	
	return 0;
}
