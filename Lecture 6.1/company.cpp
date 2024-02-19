//Q.1 Write a Program to abstract some attributes of class Admin to prevent them to be inherited by its child classes.
//- Class Admin -> Class Manager
//- Class Manager -> Class Employee
//- Class Admin has the following members:
//company_name
//manager_salary
//employee_salary
//total_staff
//total_annual_revenue
//can_terminate
//- use all attributes accessibility in the parent class and child class properly.
//- override a method myAccess() in both child classes to display all parent class members' values accordingly.
#include<iostream>
using namespace std;
class Admin
{
	protected :
		int manager_salary,employee_salary,total_staff,annual_revenue;
		string company_name,can_terminate;
	public :
		void set()
		{
			
			cout << "Admin Access"<< endl << endl;
			cout <<"Enter company name    :";
			getline(cin,company_name);
			
			cout <<"Enter annual revenue  :";
			cin >> annual_revenue;
			
			cout <<"Enter total staff     :";
			cin >> total_staff;
			cin.ignore();
			
			cout <<"Enter manager salary  :";
			cin >> manager_salary;
			
			cout <<"Enter employee salary :";
			cin >> employee_salary;
			
			cout <<"Enter can terminate   :";
			cin >> can_terminate;
			
			cout << endl;	
		}
		void myAccess()
		{
			cout << "Admin Access " << endl <<endl ;
			
			cout << "Company Name         : " << company_name << endl;
			cout << "Total Annual Revenue : " << annual_revenue << endl;
			cout << "Total Staff          : " << total_staff << endl;
			cout << "Manager Salary       : " << manager_salary <<endl;
			cout << "Employee Salary      : " << employee_salary << endl;
			cout << "Can Terminate        : " << can_terminate << endl;
			
		}
};
class Manager : public Admin
{
	public :
		void myAccess()
		{
			
			cout <<" Manager Access :"<< endl <<endl;
			
			cout <<"Enter company name    :"<< company_name << endl;
			cout <<"Enter annual revenue  :"<<annual_revenue<<endl;
			cout <<"Enter total staff     :"<<total_staff<<endl;
			cout <<"Enter employee salary :"<<employee_salary <<endl;
			cout <<"Enter can terminate   :"<<can_terminate<<endl;
			
		}
};
class Employee : public Manager
{
	public :
		void myAccess()
		{
			
			cout << "Employee Access "<< endl << endl;
			
			cout <<"Enter company name   :"<< company_name << endl;
			cout <<"Enter annual revenue :"<<annual_revenue<<endl;
			
		}
};
int main()
{
	Admin a1;
	Manager m1;
	Employee e1;
	
	a1.set();
	a1.myAccess();
	m1.myAccess();
	e1.myAccess();
	
	return 0;
	
}
