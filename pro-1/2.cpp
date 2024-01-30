#include<iostream>
using namespace std;
class time
{

	int h,m,s;
};
int main()
{
	time t;
	
	int h,m,s,ss;
	
	cout <<"Enter the seconds :";
	cin >> s;
	
	h=s/3600;
	s=s%3600;
	m=s/60;
	ss=s%60;
	
	cout <<" HH : MM : YY "<< "="<< h << ":"<< m << " "<< ss <<endl;

	return 0;	
}