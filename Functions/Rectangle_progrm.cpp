#include<iostream>
#include<rectangle.h>
using namespace std;
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
