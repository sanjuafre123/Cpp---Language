#include<iostream>
using namespace std;
class ClassCricket
{
	protected :
		int over;
		
		public :
			void getTotalOvers(int over)
			{
				this-> over=over;
				cout << "match over :" << over <<endl;	
			}
		
};
class ClassT20Match : public ClassCricket
{
	public:
		void getTotalOvers(int over)
		{
			this->over = over;
			cout << "T20 MATCH OVER : " <<over<<endl;
		}
};
class ClassODIMatch : public ClassCricket
{
		public:
		void getTotalOvers(int over)
		{
			this->over = over;
			cout << "ODI MATCH OVER : " <<over<<endl;
		}
};
int main()
{
	ClassT20Match M1;
	M1.getTotalOvers(20);
	
	ClassODIMatch c1;
	c1.getTotalOvers(50);
	return 0;
}