#include<iostream>
using namespace std;
int main()
{
	int age;
	cout <<"Enter your age :";
	cin >> age;
	
	try
	{
		if(age<18)
		{
			throw b;
		}
		else
		{
			cout <<"you are eligable vote... "<<endl;
		}
	}
	catch(...)
	{
		cout <<"Can not eligable for vote...";
	}
	
	return 0;
}
