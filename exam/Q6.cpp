#include<iostream>
using namespace std;
int main()
{
	int i=0,j=0;
	
	while(i<10)
	{
		while(j<i)
		{
			if(i%2==0)
			{
				cout<<"%"<<" ";
			}
			else
			{
				cout<<"@"<<" ";
			}
			i++;
		}
		cout<<endl;
		j++;
	}
	return 0;
}