//This is the header file or defintion of the class rectangletype
#include <iostream>
#include <cmath>
using namespace std;

class rectangletype
{
	private:
			double width;
			double length;
		
	public:
			rectangletype();//
			rectangletype(double, double);//
			void setwidth(double);//
			void setlength(double);//
			double getwidth() const;//
			double getlength() const;//
			bool issquare() const;
			double perimeter() const;
			double area() const;//
			double diagonal() const;
			void print() const;			
};//end of rectangletype class definition

//implementation of class rectangletype

//Default constructor (no parameters) to intialize the data members
//precondition: width and length have no value
//postcondition: width = 1 and length =1
rectangletype::rectangletype() //default constructor
			{
			   width = 1;
			   length = 1;	
			}
			
//Another constructor (2 parameters) to intialize the data members
//precondition: width and length have no value
//postcondition: width and length are set to values passed at instaniation
rectangletype::rectangletype(double w, double l) //another constructor
			{
				width = w;
				length = l;
			}
			
//sets the width
//precondition: width has  been initialized
//postcondition: width is set to value passed
void rectangletype::setwidth(double w) 
			{
				width = w;  //invalid width is checked in main()
			}
			
//sets the length
//precondition: length has been initialized
//postcondition: length is set to value passed
void rectangletype::setlength(double l) 
			{
				length = l;  //invalid length is checked in main()
			}
double rectangletype::getwidth() const
			{
				return width;
			}
double rectangletype::getlength() const
			{
				return length;
			}
bool rectangletype::issquare() const
			{
				return width == length;
			}
double rectangletype::perimeter() const
			{
				return 2*length + 2*width;
			}
double rectangletype::area() const
			{
				return width * length;
			}
double rectangletype::diagonal() const
			{
			  return sqrt(width*width + length*length);	
			}
void rectangletype::print() const
			{
				cout << "Width = " << width << endl;
				cout << "Length= " << length << endl;
				cout << "Area= " << area() << endl;
				cout << "Perimeter: " << perimeter() << endl;
				cout << "Diagonal: " << diagonal() << endl;
				if (issquare())
				   cout << "The rectangle is a square" << endl;
				else
				   cout << "The rectangle is not a square" << endl;
			}			
