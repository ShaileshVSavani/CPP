/*Q.1 Write a Program to perform some basic mathematical operations using an Abstract class such like:
- the area of a circle
- the area of a triangle
- the area of a rectangle
- use one single pure virtual function named calculate() to perform all the above operations*/

#include<iostream>
using namespace std;
class Shape{
	public:
		virtual double area()=0;
};
class Circle:public Shape{
	double radius;
	public:
		Circle(double r){
			radius=r;
		}
	//	Circle(double):radius(r);
		double area(){
			return 3.1415*radius*radius;
		}
};
class Triangle:public Shape{
	double base,height;
	public:
		Triangle(double b,double h):base(b),height(h){
		};
	
		double area(){
			return 0.5*base*height;
		}
};
class Rectangle:public Shape{
	double length, bredth;
	public:
		Rectangle(double l,double b):length(l),bredth(b){
		};
	
		double area(){
			return length*bredth;
		}
};
int main(){
	Circle c(10);
	cout<<"Area of Circle is :"<<c.area()<<endl;
	Triangle t(10,20);
	cout<<"Area of Triangle is :"<<t.area()<<endl;
	Rectangle R(2,3);
	cout<<"Area of Rectangle is :"<<R.area()<<endl;
	return 0;
	
}


