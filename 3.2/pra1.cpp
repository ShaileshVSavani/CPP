#include<iostream>
using namespace std;

ostream &tab(ostream &op){
	return op<<"\t";
}
class Student{
	private:
		int id;
		string name;
		double per;
	public:
		//Setter => to take input of each or every attribute
		void setData(){
			cout<<"Enter Id\t:";
			cin>>id;
			cout<<"Enter Name\t:";
			cin>>name;
			cout<<"Enter Per\t:";
			cin>>per;
		}
		//getter  => to give output of each or every attribute
		void getData(){
			cout<<"Id\t:"<<id<<endl
				<<"Name\t:"<<name<<endl
				<<"Per\t:"<<per<<endl;
		}
		void tableRow(){
			cout<<id<<tab<<name<<tab<<per<<endl;
		}
		void header(){
			cout<<"Id\tName\tPer\n===== ====== =====\n";
		}
};

int main(){
	int n;
	cout<<"Entet n:";
	cin>>n;
	
	Student s[n];
	for(int i=0;i<n;i++){
		s[i].setData();
	}
	//for(int i=0;i<1;i++){
		s[0].header();
	//}
	for(int i=0;i<n;i++){
		s[i].tableRow();
	}
}
