#include<iostream>
using namespace std;
int main()
{
	int i,j,k=1;
	
	for(i=1; i<=5; i++)
	{
		int num=i;
		for(j=1; j<=i; j++)
		{
			cout << num << " ";
			num += (5 - j);
			
		}
		cout<<endl;
	}
	return 0;
}
