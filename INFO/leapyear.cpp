// Write a Program to find leap years between two given numbers and store them in an array. 
//And then print that array.
#include<iostream>
using namespace std;
main()
{
	int a,b;
	cout <<"enter the array size :";
	cin >>a;
	
	cout <<"enter the array size :";
	cin >>b;
	
	int lenght=b-a;
	int leap=lenght/4 + 1;
	int leapyear[leap];
	
	int i,x=0,count=0;
	
	for(i=a; i<=b; i++)
	{
		if(i%4==0)
    	{
    		leapyear[x]=i;
    		x++;
    		count++;
		}
	}
	cout << endl;
	cout << "LEAP YEAR IS : ";
	for(i=0; i<x; i++)
	{
		cout<<leapyear[i]<<" ";
	}

	
	
	
}
