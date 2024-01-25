//Q.1 Write a Program to find all even elements from a given 1D array.
#include<iostream>
using namespace std;
main()
{
	int n;
	cout <<"enter the array size :";
	cin >>n;
	
	int i,a[i];
	for(i=0; i<n; i++)
	{
		cout <<"Enter the a[i] ","<< i >>";
		cin >> a[i];
	}
	cout << endl;
	
	for(i=0; i<n; i++)
	{
		cout << a[i]<< "  ";
	}
	cout << endl << endl;
	
	cout <<"NUMBER IS EVEN :";
	for(i=0; i<n; i++)
	{
		if(a[i]%2==0)
		{
			cout << a[i]<< " ";
		}
	}
	
}
