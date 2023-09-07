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
		double fees;
		static string scl;
		static double totalFees;
		static int counter;
	public:
		//Setter => to take input of each or every attribute
		void setData(){
			id=counter++;
			cout<<"Enter Name\t:";
			cin>>name;
			cout<<"Enter Per\t:";
			cin>>per;
			cout<<"Enter Fees\t:";
			cin>>fees;
			
			totalFees+=fees;
		}
		//getter  => to give output of each or every attribute
		void getData(){
			cout<<"Id\t:"<<id<<endl
				<<"Name\t:"<<name<<endl
				<<"Per\t:"<<per<<endl;
		}
		void tableRow(){
			cout<<id<<tab<<name<<tab<<per<<tab<<scl<<endl;
		}
		static void header(){
			cout<<"Id\tName\tPer\tSchool\n====== ======= ======   ======\n";
		}
		static void changeSchool(string school){
			scl=school;
		}
		static void getTotalFees(){
			cout<<"====================="<<endl
				<<"Total Fees:"<<totalFees<<endl;
		}
};
string Student::scl="GSEB";
double Student::totalFees=0;
int Student::counter=101;
int main(){
	int n;
	cout<<"Enter n:";
	cin>>n;
	
	Student s[n];
	for(int i=0;i<n;i++){
		s[i].setData();
	}
	
	system("cls");
	
	Student::changeSchool("SSC");
	Student::header();
	
	for(int i=0;i<n;i++){
		s[i].tableRow();
	}
	Student::getTotalFees();
}
