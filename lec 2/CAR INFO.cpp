#include<iostream>
#include<string.h>

using namespace std;

class employees
{
	public:
		
	int  car_id, car_model,car_release_year;
	string  car_company_name, car_color;
	
	void input()
	{
		cout << "Enter the emp_id :";
		cin >> car_id;
		cout << "Enter the emp_name :";
		cin >> car_company_name;
		cout << "Enter the emp_age :";
		cin >> car_model;
		cout << "Enter the emp_city :";
		cin >> car_release_year;
		cout << "Enter the emp_company_name :";
		cin >> car_color;
		
	}
	void output()
	{
		cout << " emp id " << car_id << endl;
		cout << " emp name " << car_company_name << endl;
		cout << " emp age " << car_model<< endl;
		cout << " emp city " <<car_release_year << endl;
		cout << " emp company name " << car_color << endl;
	
	}
};
int main()
{
	 employees emp[4];
	 int i;
	 
	 for(i=0; i<4; i++)
	 {
	 	cout<< " THIS  Car Record System !"<<endl;
	 	emp[i].input();
	 	emp[i].output();
	 }
	
	return 0;
}
