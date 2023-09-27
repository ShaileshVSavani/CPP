#include<iostream>
using namespace std;
class Base{
	public:
		virtual int show1()=0;
		void show(){
			cout<<"Base";
		}
};
class Derived: public Base{
	public:
		void show(){
			cout<<"Derived";
		}
};
int main(){
	Base b;
	b.show();
}
