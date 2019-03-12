#include <iostream>
#include "circleType.h"
#include "cylType.h"
				   
using namespace std;

int main()
{
	double width, length, area, perimeter, diagonal;
	bool issquare;
	
	rectangletype myrectangle;
	
	cout << "*************************************************" << endl;
	cout << "the following tests the default constructor and " 
	     << "the get length and get width functions" 
		 << " width = 1 and length = 1" << endl;
	cout << "Width = " << myrectangle.getwidth() << endl;
	cout << "Length = " << myrectangle.getlength() << endl;
	cout << "*************************************************" << endl;	
	
	rectangletype herrectangle(3,4);	
	
	cout << "*************************************************" << endl;
	cout << "the following tests the constructor with parameters and " 
	     << "the get length and get width functions" 
		 << " width = 3 and length = 4" << endl;
	cout << "Width = " << herrectangle.getwidth() << endl;
	cout << "Length = " << herrectangle.getlength() << endl;
	cout << "*************************************************" << endl;
	
	cout << "*************************************************" << endl;	
	cout << "the following tests the setwidth and the getwidth"  
		 << " width = whatever entered" << endl;
	cout << "*************************************************" << endl;	
	cout << "Enter a new width: ";
	cin >> width;
	
	while (width <= 0)
	{
		cout << "Invalid width. Enter a number greater than 0: ";
		cin >> width;
	}
	
	herrectangle.setwidth(width);
	
	cout << "Width = " << herrectangle.getwidth() << endl;
	cout << "*************************************************" << endl;
	
	cout << "*************************************************" << endl;	
	cout << "the following tests the setlength and the getlength"  
		 << " length = whatever entered" << endl;
	cout << "*************************************************" << endl;	
	cout << "Enter a new length: ";
	cin >> length;
	
	while (length <= 0)
	{
		cout << "Invalid length. Enter a number greater than 0: ";
		cin >> length;
	}
	
	herrectangle.setlength(length);	
	
	cout << "Length = " << herrectangle.getlength() << endl;
	cout << "*************************************************" << endl;
	cout << "the following tests the area() with a width and length of 3"  
		 << " length = whatever entered" << endl;
	cout << "*************************************************" << endl;
	cout << "The area with width=3 and length = 3: " << herrectangle.area()
	     << endl;
	cout << "*************************************************" << endl;
	
	if (herrectangle.issquare())
	   cout << "It is a square" << endl;	
	return 0;
}
