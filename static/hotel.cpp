#include<iostream>
#include<string.h>
using namespace std;
class HOTEL	
{
	int hotel_id,hotel_rating,hotel_staff_quantity,hotel_room_quantity;
	string hotel_type,hotel_location;
	static string hotel_name,hotel_establish_year;
	
	public :
	
	void input()
	{
		cout <<"Enter the hotel_id : ";
		cin >>hotel_id;
		
		cout <<"Enter the hotel_type : ";
		cin >>hotel_type;
		
		cout <<"Enter the hotel_rating : ";
		cin >>hotel_rating;
		
		cin.ignore();
		cout <<"Enter the hotel_location : ";
		getline(cin,hotel_location);
		
		cout <<"Enter the hotel_staff_quantity : ";
		cin >>hotel_staff_quantity;
		
		cout <<"Enter the hotel_room_quantity :";
		cin >>hotel_room_quantity;
					
	}
	void output()
	{
		
		cout <<" HOTEL Information !! "<< endl;
		
		cout <<" HOTEL id : "<< hotel_id << endl;
		
		cout <<" HOTEL name : "<< hotel_name << endl;
		
		cout <<" HOTEL rating : "<< hotel_rating<< endl;
		
		cout <<" HOTEL location : "<< hotel_location << endl;
		
		cout <<" HOTEL establish year : "<< hotel_establish_year << endl;
		
		cout <<" HOTEL staff quantity : "<<hotel_staff_quantity << endl;
		
		cout <<" HOTEL room quantity : "<< hotel_room_quantity << endl;
		
		cout << endl << endl;
	}
};

	string HOTEL::hotel_name="SANJU AFRE";
	string HOTEL::hotel_establish_year="2024";

main()
{
	HOTEL s1[3];
	
	int i;
	
	for(i=0; i<3; i++)
	{
		cout <<"HOTEL INFORMATION !!"<< i+1 <<endl;
		s1[i].input();
	}
	for(i=0; i<3; i++)
	{
		s1[i].output();
	}
	
	
}
