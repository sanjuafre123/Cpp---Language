//Q.2 Write a Program to add two distances using binary plus (+) operator overloading.
//
//For example,
//Input:
//input1 => Km: 3, Meter: 1020
//input2 => Km: 2, Meter: 2050
//
//Output:
//Km: 8, Meter: 70

#include<iostream>
using namespace std;
class DISTANCES
{
	protected :
		int Km,Meter;
		public :
			void set()
			{
				cout <<"Enter the Kilometer :";
				cin >> Km;
				
				cout <<"Enter the Meter :";
				cin >> Meter;
			}
			void get()
			{
				cout << "KILOMETER IS : " << Km <<endl;
				cout << "METER IS : " << Meter <<endl;

			}
			DISTANCES operator +(DISTANCES &m2)
			{
				DISTANCES Temp;
				
				Temp.Km= ((Km + m2.Km)+ (Meter + m2.Meter) / 1000);
				Temp.Meter = ((Meter +  m2.Meter) %1000);
				
				return Temp;
			}
};
int main()
{
	DISTANCES m1,m2,m3;
	
	m1.set();
	m2.set();
	
	m3 = m1 + m2;
	
	m3.get();
	
}
