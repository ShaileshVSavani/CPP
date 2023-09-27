#include<iostream>
using namespace std;

class Time{
	private:
		int h;
		int m;
	public:
		void setData(){
			cout<<"Enter Houe and Min :";
			cin>>h>>m;
		}
		void getData(){
			cout<<"Hours are :"<<h<<endl;
			cout<<"Min are :"<<m<<endl;
		}
		void sum(Time T1, Time T2){
			h=(T1.m+T2.m)/60;
			m=(T1.m+T2.m)%60;
			h=h+T1.h+T2.h;	
		}
};
int main(){
	Time t1,t2,t3;
	t1.setData();
	t2.setData();
	t3.sum(t1, t2);
	t3.getData();
	return 0;
}
