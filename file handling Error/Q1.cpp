#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout <<"Enter the value of A :";
	cin >> a;
	
	cout <<"Enter the value of B :";
	cin>> b;
	
	try
	{
		if(b==0)
		{
			throw b;
		}
		else
		{
			cout <<"Division : "<< a/b <<endl;
		}
	}
	catch(...)
	{
		cout <<"Can not Divisable by Zero...";
}
	return 0;
}
