/*Q.1 Write a Program to find the sum of all three number’s cubes by implementing single-level inheritance: Class X->Class Y
- Class X has the following members: a, b & c attributes in integer data type
- Class Y has the following members: setData() and getData() methods*/

#include<iostream>
using namespace std;

class X{
	public:
		int a; 
		int b;
		int c;
};
class Y:public X{
	public:
		void setData(){
			cout<<"Enter value of a:";
			cin>>a;
			cout<<"Enter value of b:";
			cin>>b;
			cout<<"Enter value of c:";
			cin>>c;
		}
		void getData(){
			cout<<"A is:"<<a<<endl
				<<"B is:"<<b<<endl
				<<"C is:"<<c<<endl;
				
			int sum=a+b+c;
				
			cout<<"Sum is:"<<sum<<endl;
			cout<<"Cubes is:"<<sum*sum*sum<<endl;
		}
};
int main(){
	Y y;
	y.setData();
	y.getData();
	return 0;
}
