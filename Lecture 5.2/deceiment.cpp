#include<iostream>
using namespace std;
class A
{
	protected :
		int a,b;
		public :
		void set()
		{
			cout<<"Enter the value of A :";
			cin >> a;
			
			cout<<"Enter the value of B :";
			cin >> b;
		}

		void get()
		{
			
			cout <<"A is :"<<a<<endl;
			cout <<"B is :"<<b<<endl;	
		}
		A operator -(A &m2)
		{
			A temp;
			int x = this->a - m2.a;
			int y = this->b - m2.b;
			
			temp.a = x;
			temp.b = y;
			
			return temp;
		}
};
int main()
{
	A m1,m2,m3;
	
	m1.set();
	m2.set();
	
	m3 = m1 - m2;
	
	m3.get();
	
	return 0;
	
}