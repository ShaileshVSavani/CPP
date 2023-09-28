

#include <iostream>
#include <string>

using namespace std;

class Admin {
	protected:
	    int total_staff;
	    double total_annual_revenue;
	    bool can_terminate;
	public:
	    string company_name;
	    double manager_salary;
	    double employee_salary;
	
	public:
//	    Admin(string name, double managerSalary, double employeeSalary, int staff, double revenue, bool terminate)
//	        : company_name(name), manager_salary(managerSalary), employee_salary(employeeSalary),
//	          total_staff(staff), total_annual_revenue(revenue), can_terminate(terminate) {}
	 Admin(string name, double managerSalary, double employeeSalary, int staff, double revenue, bool terminate){
	 	company_name=name;
	 	manager_salary=managerSalary;
	 	employee_salary=employeeSalary;
	 	total_staff=staff;
	 	total_annual_revenue=revenue;
	 	can_terminate=terminate;
	 }
	void myAccess() {
        cout << "Accessing Admin class members:" << endl;
        cout << "Company Name: " << company_name << endl;
        cout << "Manager Salary: " << manager_salary << endl;
        cout << "Employee Salary: " << employee_salary << endl;
        cout << "Total Staff: " << total_staff << endl;
        cout << "Total Annual Revenue: " << total_annual_revenue << endl;
        cout << "Can Terminate: " << (can_terminate ? "Yes" : "No") << endl;
    }
};
	
class Manager : public Admin {
	public:
	    Manager(string name, double managerSalary)
	        : Admin(name, managerSalary, 0.0, 0, 0.0, false) {}

    void myAccess() {
        cout << "Accessing Manager class members:" << endl;
        cout << "Company Name: " << company_name << endl;
        cout << "Manager Salary: " << manager_salary << endl;
    }
};

class Employee : public Admin {
public:
    Employee(string name, double employeeSalary)
        : Admin(name, 0.0, employeeSalary, 0, 0.0, false) {}

    void myAccess() {
        cout << "Accessing Employee class members:" << endl;
        cout << "Company Name: " << company_name << endl;
        cout << "Employee Salary: " << employee_salary << endl;
    }
};

int main() {
    Manager manager("ABC Inc.", 50000.0);
    Employee employee("XYZ Ltd.", 30000.0);

    manager.myAccess();
    cout << "-----------------------------" << endl;
    employee.myAccess();

    return 0;
}

