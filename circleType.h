//This is the header file or defintion of the class circleType
#include <iostream>
#include <cmath>
using namespace std;

class rectangletype
{
	private:
			double radius;
		
	public:
			circletype();//
			circletype(double);//
			void setrad(double);//
			double getrad() const;//
			double area() const;//
			double circum() const;//
			double arc(double) const;//arc() is the arc length when an angle (in degrees) is passed.
			double dia() const;//
			void print() const;//
					
};//end of circleType class definition

//implementation of class circleType

//Default constructor (no parameters) to intialize the data members
//precondition: radius has no value
//postcondition: radius = 1
circleType::circleType() //default constructor
			{
			   radius = 1;	
			}
			
//Another constructor (1 parameter) to intialize the data members
//precondition: radius has no value
//postcondition: radius is set to a value passed at instantiation
circleType::circleType(double r) //another constructor
			{
				radius = r;
			}
			
//sets the radius
//precondition: radius has been initialized
//postcondition: radius is set to value passed
void circleType::setrad(double r) 
			{
				radius = r;  //invalid radius is checked in main()
			}

double circleType::getrad() const
			{
				return radius;
			}

double circleType::area() const
			{
				return radius * radius * PI;
			}

double circleType::circum() const
			{
				return 2 * PI * radius;
			}

double circleType::arc(double deg) const//arc() is the arc length when an angle (in degrees) is passed.
			{
				
			}


double circleType::dia() const
			{
			  return 2 * radius
			}

void circleType::print() const
			{
				cout << "Radius = " << radius << endl;
				cout << "Area = " << area() << endl;
				cout << "Circumference =  " << circ() << endl;
				cout << "Diameter = " << dia() << endl;
				cout << "Arc = " << arc() << endl;
			}			
