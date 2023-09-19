/*Q.3 Write a Program to read and print Employee information with the use of Multilevel inheritance. (as same the attached image)*/
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
	public:
		void setter(){
			cout<<"Id is : ";
			cin>>id;
			cout<<"Name is : ";
			cin>>name;
			cout<<"Role is : ";
			cin>>role;
		}
};
class B:public A{
	public:

	void setter(){
			cout<<"Salary is :";
			cin>>salary;
			cout<<"Experience is :";
			cin>>experience;
	}
};
class C:public B{
	public:
	void getter(){
		cout<<"Name is"<<name<<endl;
	
		cout<<"Role is :"<<role<<endl;
	
	}
		void setter(){
			cout<<"Company Name :";
			cin>>comp_name;
			cout<<"Address : ";
			cin>>address;
			
		}
		
};
class D:public C{
	public:
		void setter(){
			cout<<"Email is : ";
			cin>>email;
			cout<<"Contact : ";
			cin>>contact;
		}
		void gettet(){
			cout<<"Id :"<<id<<endl
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
int main(){
	
}

