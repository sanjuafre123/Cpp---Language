#include<iostream>
using namespace std;
int main()
{
	int f,in,i;
	
	cout << " Enter the F :";
	cin >> f;
	
	cout << " Enter the in :";
	cin >> in;
	
	for(i=1; i<=in; i++)
	{
		if(in>=12)
		{
			in -=12;
			f++;
		}
	}
	
	cout << " feet is" << " "<< f <<endl;
	cout << " inch is" << " "<< in;
}
