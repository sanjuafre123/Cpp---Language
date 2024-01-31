#include<iostream>
using namespace std;
class cust
{
	int cust_id,cust_age,cust_simcard_validity;
	string cust_name,cust_city, cust_mobile_number,cust_telecom_brand_name;
	
	public :
	
	void input()
	{
		cout <<"Enter the cust id : ";
		cin >>cust_id;
		
		cout <<"Enter the cust name : ";
		cin >>cust_name;
		
		cout <<"Enter the cust age : ";
		cin >>cust_age;
		
		cout <<"Enter the cust brach name : ";
		cin >>cust_telecom_brand_name;
		
		cout <<"Enter the cust cust_city : ";
		cin >>cust_city;
		
		cout <<"Enter the cust mobail number : ";
		cin >>cust_mobile_number;
		
		cout <<"Enter the cust simcard validity";
		cin >>cust_simcard_validity;
		
		
				
	}
	
	
	
	void output()
	{
		
		cout << endl;
		cout <<" Customer Information !! ";
		
		cout <<" Customer id : "<< cust_id << endl;
		
		cout <<" Customer name id : "<< cust_name << endl;
		
		cout <<" Customer age : "<< cust_age << endl;
		
		cout <<" Customer brach name : "<< cust_telecom_brand_name << endl;
		
		cout <<" Customer cust_city : "<< cust_city << endl;
		
		cout <<" Customer mobail number : "<<cust_mobile_number << endl;
		
		cout <<" Customer simcard validity  : "<< cust_simcard_validity << endl;
		
		cout << endl << endl;
	}
};
main()
{
	cust c[5];
	
	int i;
	
	for(i=0; i<5; i++)
	{
		cout << " CUSTERMER INFORMATION !! "<< i + 1 << endl;
		c[i].input();
		c[i].output();
	}
}
