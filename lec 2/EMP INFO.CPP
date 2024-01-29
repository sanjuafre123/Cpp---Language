#include<iostream>
#include<string.h>

using namespace std;

class employees
{
	public:
	int emp_id,emp_age,emp_salary,emp_experience;
	string emp_name,emp_role,emp_city,emp_company_name;
	
	void input()
	{
		cout << "Enter the emp_id :";
		cin >> emp_id;
		cout << "Enter the emp_name :";
		cin >> emp_name;
		cout << "Enter the emp_age :";
		cin >> emp_age;
		cout << "Enter the emp_city :";
		cin >> emp_city;
		cout << "Enter the emp_company_name :";
		cin >> emp_company_name;
		cout << "Enter the emp_experience :";
		cin >> emp_experience;
		cout << "Enter the emp_salary:";
		cin >> emp_salary;
		cout << "Enter the emp_role :";
		cin >> emp_role;
		
	}
	void output()
	{
		cout << " emp id " << emp_id << endl;
		cout << " emp name " << emp_id << endl;
		cout << " emp age " << emp_id << endl;
		cout << " emp city " << emp_id << endl;
		cout << " emp company name " << emp_id << endl;
		cout << " emp experience" << emp_id << endl;
		cout << " emp salary" << emp_id << endl;
		cout << " emp role" << emp_id << endl;
	}
};
int main()
{
	 employees emp[5];
	 int i;
	 
	 for(i=0; i<5; i++)
	 {
	 	cout<< " THIS Employees information !"<<endl;
	 	emp[i].input();
	 	emp[i].output();
	 }
	
	return 0;
}
