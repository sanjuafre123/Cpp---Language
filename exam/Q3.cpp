#include<iostream>
using namespace std;
int main()
{
	int i,n,sum=0,average=1;
	int a[n];
	for(i=0; i<=20; i++)
	{
		if(a[i]%2!=0)
		{
			cout<<i<<" ";
			sum=sum+i;
		}
	}
	cout<<endl;
	cout <<"sum is :"<<sum;
	cout<<endl;
	average=sum/20;
	cout <<"average  is :"<<sum/average;

	
	return 0;
}