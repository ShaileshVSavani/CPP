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
		//	A::getData();
		//	B::getData(); 
		cout<<"Value of c is:"<<c<<endl;
		}
};
class D:public C{
	private:
		int d;
	public:
		void setData4(){
			cout<<"Enter the value of d:";
			cin>>d;
		}
		void getData(){
			A::getData();
			B::getData();
			C::getData();
			
			cout<<"Value of d is:"<<d<<endl;
		}
};
int main(){
	D a;
	a.setData1();
	a.setData2();
	a.setData3();
	a.setData4();
	a.getData();
}











