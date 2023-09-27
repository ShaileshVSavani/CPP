#include<iostream>
using namespace std;

class A{
	protected:
		int a;
	public:
		setA(){
			cout<<"Enter value of a:";
			cin>>a;
		}
};
class B{
	protected:
		int b;
	public:
		setB(){
			cout<<"Enter value of b:";
			cin>>b;
		}
};
class C:public A, public B{
	private:
		int c;
	public:
		setC(){
			cout<<"Enter value of c:";
			cin>>c;
		}
	void sum(){
	cout<<"Sum is:"<<a+b+c;
	}
};

int main(){
	C x;
	x.setA();
	x.setB();
	x.setC();
	x.sum();
	return 0;
}











