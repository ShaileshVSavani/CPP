#include<iostream>
using namespace std;
class A{
	public:
		virtual void function(){
			cout<<"Base Class";
		}
};
class B :public A{
	void function(){
		cout<<"Derived Class";
	}
};
int main(){
	A *ptr;
	B aa; 
	ptr=&aa;
	ptr->function();
	
	//B bb;
	//bb.A::function();
	//bb.function();
}
