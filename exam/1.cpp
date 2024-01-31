#include<iostream>
using namespace std;
class time
{
	public:
	int f1,i1,f2,i2;

	void input()
	{
		cout<<"enter the f1 : ";
		cin>>f1;
		
		cout<<"enter the i1 : ";
		cin>>i1;
		
		cout<<endl<<endl;
		
		cout<<"enter the f2 : ";
		cin>>f2;
		
		cout<<"enter the i2 : ";
		cin>>i2;
		
		f1 = f1 + (i1/12);
		i1 = i1 % 12;
		
		f2 = f2 + (i2/12);
		i2 = i2 % 12;
		
		cout<<endl<<endl;

		cout << "feet is "<< " : " << f1 + f2<< endl;
		cout << "inch is "<< " : " << i1 + i2;
		
	}	
};

int main()
{
	
	time a;
	a.input();
	return 0;
}
