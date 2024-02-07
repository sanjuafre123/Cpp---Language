#include<iostream>
using namespace std;
 
class P
{
	protected:
		float Celsius;
		
		public :
			void Cel()
			{
				cout << "Enter the Celsius :";
				cin >> Celsius;
			}
};
class Q : public P
{
	protected:
		float Fehrenheit;
		public :
			void Feh()
			{
			     Fehrenheit = ( Celsius * 9/5) + 32;
			}
};
class R : public Q
{
	protected:
		
		float Kelvin;
		public :
			
			void K()
			{
				Cel();
				Feh();
				Kelvin = (Fehrenheit - 32) * 5 / 9 + 273.15; 
			}
		void get()
		{
			cout << "Celsius is : "<< Celsius << endl;
			cout <<	"Fehrenheit is : "<< Fehrenheit << endl;
			cout << "Kelvin is : "<< Kelvin << endl;
		}	
};
int main()
{
	
	R r1;
	r1.K();
	r1.get();
	
	return 0;
}
