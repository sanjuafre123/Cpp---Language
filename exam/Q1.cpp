#include<iostream>
using namespace std;
int main()
{
	int N,i,sum=0,x;
	
	cout <<"Enter the any number :";
	cin >> N;
	
	for(i=0; i<N; i++)
	{
		x=N%10;
		N=N/10;
		sum=sum+x;
	}
	cout << "Sum is :"<<sum<<endl;
	return 0;
}