#include<iostream>
using namespace std;
int main()
{
	int row,colum;

	cout<<"Enter the row :";
	cin >> row;

	cout<<"Enter the colum :";
	cin >> colum;

	int a[row][colum];
	int b[row][colum];

	int i,j;

	for(i=0; i<row; i++)
	{
		for(j=0; j<colum; j++)
		{
			cout <<"Enter the value of Array:["<< i <<"]["<< j <<"]:";
			cin >>a[i][j];
		}
	}
	for(i=0; i<row; i++)
	{
		for(j=0; j<colum; j++)
		{
			cout <<a[i][j];
		}
		cout<<endl;
	}
	for(i=0; i<row; i++)
	{
		for(j=0; j<colum; j++)
		{
			cout<<a[j][i];
		}
		cout<<endl;
	}
	return 0;
}
















