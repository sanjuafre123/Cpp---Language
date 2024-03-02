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
			
			cout << a[i][j]<<" ";
		}
	cout << endl;
	}
	int max[0][0];
	for(i=0; i<row; i++)
	{
		for(j=0; j<colum; j++)
		{
			if(max>a[i][j])
			{
				max=a[i][j];
			}
		}
		cout << endl;
	}
	
   return 0;
}