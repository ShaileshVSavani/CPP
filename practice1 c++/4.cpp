#include<iostream>
using namespace std;

class Time{
	private:
		int h;
		int m;
	public:
		void setTime(){
			cout<<"Enter time in hour :";
			cin>>h;
			cout<<"Enter time in minute :";
			cin>>m;
		}
		void getTime(){
			cout<<"Hours are:"<<h<<endl;
			cout<<"Minutes are:"<<m<<endl;
		}
		void sum(Time T1,Time T2){
			h=(T1.m+T2.m)/60;
			m=(T1.m+T2.m)%60;
			h=h+T1.h+T2.h;
		}
};
int main(){
	Time t1,t2,t3;
	t1.setTime();
	t2.setTime();
	t3.sum(t1,t2);
	t3.getTime();
	return 0;
}






