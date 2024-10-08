/*
progect name:Rectangle
Author:Sumeya a.a
date: 7th october, 2024.
*/
#include<iostream>
using namespace  std;

class Rectangle
{
		public:
		double length;
		double width;
		
		public:
		double getArea();
		double getPerimeter();
		void Display();			
};
double Rectangle::getArea()
{
	return length * width;
}
double Rectangle::getPerimeter()
{
	return 2*(length + width);
}
void Rectangle::Display()
{
	cout<<" area of the Rectangle is :"<<getArea()<<endl;
	cout<<" perimeter of the Rectangle is :"<<getPerimeter()<<endl;
}
int main()
{
	Rectangle rectangle1,rectangle2;
	
	rectangle1.length=4;
	rectangle1.width=6;
	
	rectangle2.length=3;
	rectangle2.width=6;
	
	cout<<"Rectangle 1:"<<endl;
	rectangle1.Display();
	
	cout<<endl;
	
	cout<<"Rectangle 2:"<<endl;
	rectangle2.Display();
}
