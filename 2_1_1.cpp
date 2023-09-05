/*Q.1 Write a Program to create an Employee Record System using the Class & Object of any 5 employees.
 Consider the below-mentioned attributes in the Employee class:
- emp_id
- emp_name
- emp_age
- emp_role
- emp_salary
- emp_city
- emp_experience
- emp_company_name*/

#include<iostream>
using namespace std;
class Employee{
	private:
		int emp_id;
		string emp_name;
		int emp_age;
		int emp_role;
		double emp_salary;
		string emp_city;
		int emp_experience;
		string emp_company_name;
	public:
	/*	void setData(int id, string name, int age, int role, double salary, string city, int experice, string cName){
			emp_id=id;
			emp_name=name;
			emp_age=age;
			emp_role=role;
			emp_salary=salary;
			emp_city=city;
			emp_experience=experice;
			emp_company_name=cName;
			
		}
	*/
	void setData(){
		cout<<"Enter Id:";
		cin>>emp_id;
		cout<<"Enter Name:";
		cin>>emp_name;
		cout<<"Enter Age:";
		cin>>emp_age;
		cout<<"Enter Role:";
		cin>>emp_role;
		cout<<"Enter Salary:";
		cin>>emp_salary;
		cout<<"Enter City:";
		cin>>emp_city;
		cout<<"Enter Experience:";
		cin>>emp_experience;
		cout<<"Enter Company Name:";
		cin>>emp_company_name;
	}
		void getData(){
			cout<<"Id\t\t\t:"<<emp_id<<endl
				<<"Name\t\t\t:"<<emp_name<<endl
				<<"Age\t\t\t:"<<emp_age<<endl
				<<"Role\t\t\t"<<emp_role<<endl
				<<"Salary\t\t\t:"<<emp_salary<<endl
				<<"City\t\t\t:"<<emp_city<<endl
				<<"Experience\t\t:"<<emp_experience<<endl
				<<"Company Name\t\t:"<<emp_company_name<<endl;
		}
		
};
int main(){
	int n;
	cout<<"Enter value of n:";
	cin>>n;
	
	Employee e[n];
	for(int i=0;i<n;i++){
		e[i].setData();
	}
	for(int i=0;i<n;i++){
		e[i].getData();
	}
	return 0;
}

