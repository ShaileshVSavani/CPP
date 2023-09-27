/*Q.1 Write a Program to abstract some attributes of class Admin to prevent them to be inherited by its child classes.
- Class Admin -> Class Manager
- Class Manager -> Class Employee
- Class Admin has the following members:
company_name
manager_salary
employee_salary
total_staff
total_annual_revenue
can_terminate
- use all attributes accessibility in the parent class and child class properly.
- override a method myAccess() in both child classes to display all parent class members' values accordingly.*/
#include<iostream>
using namespace std;

class Admin{
	private:
		string company_name;
		double total_annual_revenue;
	protected:
		double manager_salary;
		double employee_salary;
		int total_staff;
		bool can_terminate;
	public:
		void setAdminValue(string name, double m_salary, double e_salary, int staff, double revenue, bool terminate){
			company_name=name;
			manager_salary=m_salary;
			employee_salary=e_salary;
			total_staff=staff;
			total_annual_revenue=revenue;
			can_terminate=terminate;	 
		}
};
class Manager:public Admin{
	public:
		void myAccess(){
			cout<<"Manager's Access"<<endl;
			cout<<"Manager Salary :"<<manager_salary<<endl;
			cout<<"Employee Salary :"<<employee_salary<<endl;
			cout<<"Total Staff :"<<total_staff<<endl;
			cout<<"Can terminate :"<<(can_terminate?"Yes":"No")<<endl;
		}	
};
class Employee :public Admin{
	public:
		void myAccess(){
			cout<<endl;
			cout<<"Employee's Access"<<endl;
			cout<<"Employee Salary "<<employee_salary<<endl;
			cout<<"Total Staff :"<<total_staff<<endl;
		}
};
int main(){
	Manager m;
	Employee e;
	m.setAdminValue("ABC",50000,25000,5,123456789,true);
	e.setAdminValue("xyz",50000,25000,5,123456789,true);
	m.myAccess();
	cout<<"----------------";
	e.myAccess();
	return 0;
}
