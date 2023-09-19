/*Q.1 Write a Program to perform all basic arithmetic. operations such as +, -, *, and / operations by implementing method overloading using 2 classes.
- use only one method named calculate() in the child class
- if you pass 2 arguments, perform division
- if you pass 3 arguments, perform subtraction
- if you pass 4 arguments, perform multiplication
- if you pass 5 arguments, perform addition*/
#include<iostream>
using namespace std;

class A{
	protected:
		int a,b,c,d,e;
};
class B:public A{
	public:
		void calc(int m, int n){
			a=m;
			b=n;
			cout<<"Division is :"<<a/b<<endl;
			
		}
		void calc(int m, int n, int o){
			a=m;
			b=n;
			c=o;
			cout<<"Subtraction is :"<<a-b-c<<endl;
			
		}
		void calc (int m, int n, int o, int p){
			a=m;
			b=n;
			c=o;
			d=p;
			cout<<"Multiplication is :"<<a*b*c*d<<endl;
			
		}
		void calc(int m, int n, int o, int p,int q){
			a=m;
			b=n;
			c=o;
			d=p;
			e=q;
			cout<<"Addition is :"<<a+b+c+d+e<<endl;
			
		}
};
int main(){
	B b;
	b.calc(4,2);
	b.calc(6,4,2);
	b.calc(2,3,4,5);
	b.calc(1,2,3,4,5);
	return 0;
}
