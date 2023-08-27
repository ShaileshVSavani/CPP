#include<iostream>
using namespace std;
#define Pi 3.1415
int r=2;
class Myclass{
	public:
		int a;
		void display(){	
		cout<<"Hello World"<<endl<<a<<endl;
		}
};
void area(){
	float area;
	area=Pi*r*r;
	cout<<area<<endl;
}
int main(){
	Myclass sh;
	sh.a=50;
	sh.display();
	area();
	return 0;
}
