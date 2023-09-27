#include<iostream>
using namespace std;
class Base{
	int a;
	public:
		virtual void prop()=0;
		int geta(){
			return a;
		}
};
class Derived :public Base{
	int b;
	public:
		void prop(){
			cout<<"fun() called";
		}
};
int main(){
	Derived d;
	d.prop();
}
