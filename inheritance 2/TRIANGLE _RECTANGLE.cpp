//Q.1 Write a Program that defines a shape class with a constructor that gives value to width and height. 
//Then define two sub-classes triangle and rectangle, that calculate the area of the shape area (). 
//In the main, define two objects a triangle and a rectangle, and then call the area() function using these two objects.
#include<iostream>
using namespace std;

class shape
{
	protected :
		int height,width;
		
		void get()
		{
			cout <<"HEIGHT IS : ";
			cin >> height;
			
			cout <<"WIDTH IS : ";
			cin >> width;
		}
};
class rectangle : public shape
{
	public :
		void Rec()
		{
			get();
			int R;
			R =  height * width;
			cout << "AREA OF RECTANGLE :" << R << endl << endl ;
		}
};
class triangle : public shape
{
	public :
		void TRI()
		{
			get();
			int T;
			T =  (height *width) * 1/2 ;
			cout << "AREA OF TRIANGLE :"<< T << endl ;
		}
};
int main()
{
	rectangle r1;
	r1.Rec();
	
	triangle t1;
	t1.TRI();
	
	
	return 0;
}
