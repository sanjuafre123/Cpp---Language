#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char pass[50];
	cout <<"Enter your password :";
	cin >> pass;
	int len=strlen(pass);
	int check=0;
	
	for(int i=0;i<=len;i++)
	{
		if(pass[i]>64 && pass[i]<91 )
		{
			check=1;
		}
	}
	try
	{
		if(check!=1)
		{
			throw pass;
		}
		else
		{
			cout <<"password is correct... "<<endl;
		}
	}
	catch(...)
	{
		cout <<"password does not correct.....!";
	}
	return 0;
}
