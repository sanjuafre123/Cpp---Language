#include<iostream>
using namespace std;
int main()
{
	int i,j;
	
	for(i=1; i<10; i++)
	{
		for(j=i; j<10; j++)
		{
			if(i%2==0)
			{
				cout<<"%"<<" ";
			}
			else
			{
				cout<<"@"<<" ";
			}
			
		}
		cout<<endl;
	}
	return 0;
}