#include<iostream>
using namespace std;
double rect_area(double width, double length); /* Function prototype */
int my_number;
int main()
{
	double ar,wid,leng;

	my_number = 15;

	cout<<"Enter the width and length of the rectangle: ";
	cin>>wid>>leng;

	ar = rect_area(wid,leng); /*Function call */

	cout<<"\nThe area of the rectangle is "<<ar<<"\n\n";

	return 0;
}
double rect_area(double width, double length) /*Function header / heading */
{
	double area;
	my_number = my_number + 10;
	cout<<"\nThe value is "<<my_number<<"\n";
	area = width * length;	// Function body & function definition

	return area;
		cout<<"\n We hve nothing to sy";
}
