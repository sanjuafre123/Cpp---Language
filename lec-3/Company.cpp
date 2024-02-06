#include<iostream>
#include<string.h>
using namespace std;

class Diamond
{
	int comp_id,comp_revenue,comp_staff_quantity,comp_export_diamonds,comp_import_raw_diamonds;
	string comp_name,comp_ceo;

	public :
	
	Dimond()
	{
		cout << "sanju Consructure" << endl;
		cout << "Sanju Afre" << endl;
	}
	
	void set()
	{
		cout << "Enter the Company Id : ";
		cin >> comp_id;
		
		cout << "Enter the Staff Quantity : ";
		cin >> comp_staff_quantity;
		
		cout << "Enter the Company revenue : ";
		cin >> comp_revenue;
		
		cout << "Enter the Import Raw Material : ";
		cin >> comp_import_raw_diamonds;
		
		cout << "Enter the Export Raw Material : ";
		cin >> comp_export_diamonds;
			
	}
	void get()
	{
		cout << "comp ID : " << comp_id << endl;
		cout << "comp Staff Quantity : " << comp_staff_quantity << endl;
		cout << "comp Revenue : " << comp_revenue << endl;
		cout << "comp Import Raw Material : " << comp_import_raw_diamonds << endl;
		cout << "comp Export Raw Material : " << comp_export_diamonds << endl;
		cout << endl;
	}
};

int main()
{
	int n,i;
	cout << "Enter the diamond company information no. : ";
	cin >> n;
	
	Diamond d[n];
	
	for(i=0; i<n; i++)
	{
		d[i].set();
	}
	for(i=0; i<n; i++)
	{
		d[i].get();
	}

	return 0;
}
 
