#include<iostream>
using namespace std;
int main()
{
	int hours,second,minutes,seconds;

	cout << "Enter the time in seconds :";
	cin >> second;

	hours = second/3600;
	second=second%3600;
	minutes=second/60;
	seconds=second%60;
	
	cout << endl;
	
	cout << "HH : MM : SS"<<" = " << hours <<" : " << minutes << " : " << seconds;
	cout << endl;
	
	return 0;
}
