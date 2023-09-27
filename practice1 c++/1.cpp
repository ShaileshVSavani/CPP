#include<iostream>
using namespace std;
class A{
	private:
		int a;
	public:
		void setData1(){
			cout<<"Enter the value of a:";
			cin>>a;
		}
		void getData(){
			cout<<"Value of a is:"<<a<<endl; 
		}
};
class B{
	private:
		int b;
	public:
		void setData2(){
			cout<<"Enter the value of b:";
			cin>>b;
		}
		void getData(){
			cout<<"Value of b is:"<<b<<endl; 
		}
};
class C:public A, public B{
	private:
		int c;
	public:
		void setData3(){
			cout<<"Enter the value of c:";
			cin>>c;
		}
		void getData(){
			A::getData();
			B::getData(); 
		}
};
int main(){
	C a;
	a.setData1();
	a.setData2();
	//a.setData3();
	a.getData();
}











