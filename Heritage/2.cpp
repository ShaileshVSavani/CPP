/*Q.2 Write a Program to demonstrate an example of hierarchical inheritance to get the square and cube of a number.*/

#include<iostream>
using namespace std;

class N{
	protected:
		int n;
	public:
		void setData(){
			cout<<"Enter n:";
			cin>>n;
		}
		void getData(){
			cout<<"Number is:"<<n<<endl;
		}
};
class S:public N{
	public:
	void s(){
		cout<<"Square is:"<<n*n<<endl;
	}
};
class C:public N{
	public:
		void c(){
		cout<<"Cube is:"<<n*n*n<<endl;
	}
};
int main(){
	S a;
	C b;
	a.setData();
	a.getData();
	b.setData();
	b.getData();
	a.s();
	b.c();
	return 0;
	
	
}
