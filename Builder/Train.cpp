#include<iostream>
using namespace std;
class Railway
{
	
	int TrainTime;
	string TrainName,Destination;
	static string Source;
	
	public :
		
		int TrainNumber;
		
		Railway(int TrainNumber,int TrainTime,string TrainName,string Destination )
		{
			this->TrainNumber = TrainNumber;
			this->TrainName   = TrainName;
			this->Destination  = Destination;
			this->TrainTime   = TrainTime;
		}
		void get()
		{
			cout << "Train Number : " << TrainNumber << endl;
			cout << "Train Name : " << TrainName << endl;
			cout << "Source : " << Source << endl;
			cout << "Destination : " << Destination << endl;
			cout << "Train Time : " << TrainTime << endl;
			
			cout << endl;
		}
};
 
string Railway::Source="Surat";

int main()
{
	int TrainNumber,TrainTime;
	string TrainName,Destination,Source;
	
	Railway Rail[3] = Railway(TrainNumber,TrainTime,TrainName,Destination);
	
	int i,n;
	
	cout<<"Enter the Railway record : ";
	cin>>n;
	
	for(i=0; i<3; i++)
	{
		cout<<"---------------------"<<endl;
		cout<<"Enter the Tarin of details :"<<endl;
		
		cout<<"Enter the train number : ";
		cin>>TrainNumber;
		
		cin.ignore();
		cout<<"Enter the train source : ";
		getline(cin,Source);
		
		cout<<"Enter the train name : ";
		getline(cin,TrainName);
		
		cout<<"Enter the train time : ";
		cin>>TrainTime;
		cin.ignore();
		
		Rail[i]= Railway(TrainNumber,TrainTime,TrainName,Destination);
	}
	
	cout << "Enter the choice Train number : ";
	cin >> n;
	
	for(i=0; i<3; i++)
	{
		if(n == Railway[i].TrainNumber)
		{
			Rail[i].get();	
		}	
		else
		{
			printf("Enter the valid train num !!");
			cout << endl;
		}
	}
	
	return 0;
}
