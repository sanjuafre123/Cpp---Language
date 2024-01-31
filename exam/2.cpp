#include<iostream>
using namespace std;
class time
{
	public:
	int hh,mm,ss,s;
	
	void input ()
	{
		int s;
		cout <<"enter the time in seconds :";
		cin >> s;
			
		hh= s / 3600;
		s = s % 3600;
		mm= s / 60;
		ss= s % 60;
		
		cout <<"HH : MM : SS"<<" : "<< hh << " : "<< mm << " : "<< ss ; 
	}
	
};
int main()
{
	time a;
	a.input();
	
	return 0;
}
