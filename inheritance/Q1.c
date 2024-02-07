#include<iostream>
using namespace std;
 
class x
{
	protected:
		int a,b,c;
}
class y : public x
{
	protected:
		int sum=0,cub;
	public:
		void setter()
		{
			cout << "Enter the value of a :";
			cin >> a;
			
			cout << "Enter the value of b :";
			cin >> b;
			
			cout << "Enter the value of c :";
			cin >> c;	
		}
		void getter()
		{
			sum = a + b + c;
			
			cout << endl;
			
			cout << "sum is "<< sum <<endl;
			
			cub = sum * sum * sum;
			
			cout << cub is << cub <<endl;
		}
	
}
main()
{
	y Y1;
	
	y.setter();
	y.setter();
}
