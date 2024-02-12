//Q.2 Write a Program to demonstrate an example of hierarchical inheritance to get the square and cube of a number.
#include<iostream>
using namespace std;
class ANS
{
	protected :
		int N;
		
		void get()
		{
			cout << "Enter the value N :";
			cin >> N;
		}
};
class square : public ANS
{
	public :
		void Square()
		{
			get();
			int S;
			S = N * N;
			cout << "square value is :"<< S <<endl << endl;
		}
};
class cube : public ANS
{
	public :
		void Cube()
		{
			get();
			int C;
			C = N * N * N;
			cout << "cube value is :"<< C <<endl<<endl;
		}
};
int main()
{
	square s1;
	cube c1;
	
	s1.Square();
	c1.Cube();
	
	return 0;
}
