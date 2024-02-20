#include<iostream>
using namespace std;
class Shap
{
	public :
		int height,width,lenght,redius,base;
		const float pi = 3.14;
		virtual void Area() = 0;
		
};

class Circle : public Shap
{
	public :
		void Area()
		{
			cout <<"Enter the value of redius :";
			cin >> redius;
		}
		void AreaCircle()
		{
			cout << "Area Of Circle : " << (redius * redius) * pi << endl << endl;
		}
};

class Triangle : public Shap
{
	public :
	 	void Area()
		{
			cout <<"Enter the value of height :";
			cin >> height;
			cout <<"Enter the value of base :";
			cin >> base;
		}
		void AreaCircle()
		{
			cout << "Area Of Triangle : " << (height * base) / 2 << endl << endl;
		}
};

class Rectangle : public Shap
{
	public :
		void Area()
		{
			cout <<"Enter the value of lenght :";
			cin >> lenght;
			cout <<"Enter the value of width :";
			cin >> width;
		}
		void AreaCircle()
		{
			cout << "Area Of Rectangle : " << lenght * width << endl << endl;
		}
};
int main()
{
	Circle c1;
	Triangle t1;
	Rectangle r1;
	
	c1.Area();
	c1.AreaCircle();
	
	t1.Area();
	t1.AreaCircle();
	
	r1.Area();
	r1.AreaCircle();
	return 0;
}











