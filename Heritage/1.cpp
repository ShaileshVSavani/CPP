/*Q.1 Write a Program that defines a shape class with a constructor that gives value to width 
and height.
 Then define two sub-classes triangle and rectangle, that calculate the area of 
 the shape area ().
 In the main, define two objects a triangle and a rectangle, and then
  call the area() function using these two objects.*/
  
#include<iostream>
using namespace std;

class Shape{
	protected:
		double w,h;
	public:
		Shape(double width, double height){
			w=width;
			h=height;
		}		
};
class Triangle:public Shape{
	public:
		Triangle(double width, double height):Shape(width, height){}
		double area(){
			return (w*h)/2;
		}
};
class Rectangle:public Shape{
	public:
		Rectangle(double width, double height):Shape(width, height){}
		double area(){
			return w*h;
		}
};
int main(){
	int a,b;
	cout<<"Enter a :";
	cin>>a;
	cout<<"Enter b :";
	cin>>b;
	Triangle t(a,b);
	cout<<"Area of Triangle is :"<<t.area()<<endl;
	
	cout<<"**************************"<<endl;
	int c,d;
	cout<<"Enter c :";
	cin>>c;
	cout<<"Enter d :";
	cin>>d;
	Rectangle r(c,d);
	cout<<"Area of Rectangle is :"<<r.area()<<endl;
	return 0;
}
