#include<iostream>
using namespace std;
class Student	
{
	int stu_id,stu_age;
	string stu_name,stu_course,stu_city,stu_email,stu_college;
	
	public :
	
	void input()
	{
		cout <<"Enter the stu id : ";
		cin >>stu_id;
		
		cout <<"Enter the stu name : ";
		cin >> stu_name;
		
		cout <<"Enter the stu age : ";
		cin >>stu_age;
		
		cout <<"Enter the stu_course : ";
		cin >>stu_course;
		
		cout <<"Enter the stu city : ";
		cin >>stu_city;
		
		cout <<"Enter the stu_email : ";
		cin >>stu_email;
		
		cout <<"Enter the stu_college :";
		cin >>stu_college;
					
	}
	void output()
	{
		
		cout <<" Student Information !! "<< endl;
		
		cout <<" Student id : "<< stu_id << endl;
		
		cout <<" Student name id : "<< stu_name << endl;
		
		cout <<" Student age : "<< stu_age << endl;
		
		cout <<" Student course name : "<< stu_course<< endl;
		
		cout <<" Student city : "<< stu_city << endl;
		
		cout <<" Student email id : "<<stu_email << endl;
		
		cout <<" Student colleg name : "<< stu_college << endl;
		
		cout << endl << endl;
	}
};
main()
{
	Student c[5];
	
	int i;
	
	for(i=0; i<5; i++)
	{
		cout << " Student INFORMATION !! "<< i + 1 << endl;
		c[i].input();
		c[i].output();
	}
}
