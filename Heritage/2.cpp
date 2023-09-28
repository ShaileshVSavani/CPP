/*Q.2 Write a Program to demonstrate an example of hierarchical inheritance to get
 the square and cube of a number.*/

#include<iostream>
using namespace std;

class N{
	protected:
		int x;
	public:
		void setData(){
			cout<<"Enter x:";
			cin>>x;
		}
	
};
class S:public N{
	protected:
		int y;
	public:
		
	void s(){
		y=x*x;
		cout<<"Square is:"<<x<<endl;
	}
};
class C:public N{
	protected:
		int z;
	public:
		void c(){
			z=x*x*x;
		cout<<"Cube is:"<<z<<endl;
	}
};
int main(){
	S s;
	s.setData();
	s.s();
	
	C c;
	c.setData();
	c.c();

	return 0;
	
	
}
