/*Q.3 Write a Program to read and print Employee information with the use of
 Multilevel inheritance. (as same the attached image)*/
#include<iostream>
using namespace std;

class A{
	protected:
		int id;
		string name;
		int role;
		double salary;
		int experience;
		string comp_name;
		string address;
		string email;
		int contact;
		static int count;
	public:
		void setterA(){
			id=count++;
//			cout<<"Id is : ";  //use of static
//			cin>>id;
			cout<<"Name is : ";
			cin>>name;
			cout<<"Role is : ";
			cin>>role;
		}
};
class B:public A{
	public:

	void setterB(){
			cout<<"Salary is :";
			cin>>salary;
			cout<<"Experience is :";
			cin>>experience;
	}
};
class C:public B{
	public:
//	void getterB(){
//		cout<<"Name is :"<<name<<endl;
//	
//		cout<<"Role is :"<<role<<endl;
//	
//	}
		void setterC(){
			cout<<"Company Name :";
			cin>>comp_name;
			cout<<"Address : ";
			cin>>address;
			
		}
		
};
class D:public C{
	public:
		void setterD(){
			cout<<"Email is : ";
			cin>>email;
			cout<<"Contact : ";
			cin>>contact;
		}
		void gettetD(){
			cout<<"*****************"<<endl
				<<"Id : "<<id<<endl
				<<"Name :"<<name<<endl
				<<"Role : "<<role<<endl
				<<"Salary : "<<salary<<endl
				<<"Experience : "<<experience<<endl
				<<"Company Name : "<<comp_name<<endl
				<<"Address : "<<address<<endl
				<<"Email : "<<email<<endl
				<<"Contact :"<<contact<<endl;
		}
};
int A::count=1;
int main(){
	int n;
	cout<<"Enter Number of Employee :";
	cin>>n;
	
	D d[n];
	for(int i=0;i<n;i++){
		d[i].setterA();
		d[i].setterB();
		d[i].setterC();
		d[i].setterD();
	}
	for(int i=0; i<n;i++){
		//d[i].getterB();
		d[i].gettetD();
	}	
	return 0;
}

