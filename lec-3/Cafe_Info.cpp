#include<iostream>
#include<string.h>
using namespace std;

class Cafe
{
        int cafe_id,cafe_rating,cafe_establish_year,cafe_staff_quantity;
        string cafe_name,cafe_type,cafe_location;

        public :

        void set()
        {
            cout << "Enter the cafe ID : ";
            cin >> cafe_id;

            cout << "Enter the cafe Rating : ";
            cin >> cafe_rating;

            cout << "Enter the cafe Establish Year : ";
            cin >> cafe_establish_year;
                
            cout << "Enter the cafe staff quantity : ";
            cin >> cafe_staff_quantity;
            cin.ignore();

            cout << "Enter the cafe Name : ";
            getline(cin,cafe_name);

            cout << "Enter the cafe Type : ";
            getline(cin,cafe_type);

            cout << "Enter the cafe Location : ";
            getline(cin,cafe_location);
            cout << endl;
        }

        void get()
        {
                cout << "Cafe ID : " << cafe_id << endl;
                cout << "Cafe Name : " << cafe_name << endl;
                cout << "Cafe Rating : " << cafe_rating << endl;
                cout << "Cafe Type : " << cafe_type << endl;
                cout << "Cafe Establish Year : " << cafe_establish_year << endl;
                cout << "Cafe Location : " << cafe_location << endl;
                cout << "Cafe Staff Quantity : " << cafe_staff_quantity << endl;
                cout << endl;
        }
};
int main()
{
        int n,i;
        cout << "Enter the size of the Array : ";
        cin >> n;

        Cafe c[n];

        for(i=0; i<n; i++)
        {
            c[i].set();
        }
        for(i=0; i<n; i++)
        {
            c[i].get();
        }

        return 0;
}
