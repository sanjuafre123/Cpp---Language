#include<iostream>
using namespace std;
class messege
{
	string msg;
	public :
		messege(string msg)
		{
			this->msg=msg;
		}
		void print()
		{
			cout << msg << " "<<endl;
		}
		void print(string newmsg)      
		{
			cout << msg << " "<< newmsg<<endl;
			
		}
		
};
int main()
{
	
	messege m1("sanju");
	m1.print();
	m1.print("afre");
	
	return 0;
}