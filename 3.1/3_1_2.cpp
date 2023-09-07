/*Q.2 Write a Program to create a Customer Record System for 5 customers using Encapsulation. Consider the below-mentioned attributes in the Customer structure:
- cust_id
- cust_name
- cust_age
- cust_city
- cust_mobile_number
- cust_simcard_validity (in years)
- cust_telecom_brand_name (like Jio, Airtel, Vi, etc.)*/

#include<iostream>
using namespace std;
class Customer{
	private:
		int id;
		char name[50];
		int age;
		char city[50];
		int mo_No;
		int simValidity;
		char telecom[50];
	public:
		void setData(){
			cout<<"Enter Id:";
			cin>>id;
			cout<<"Enter Name:";
			cin>>name;
			cout<<"Enter Age:";
			cin>>age;
			cout<<"Enter City:";
			cin>>city;
			cout<<"Enter Mobile No:";
			cin>>mo_No;
			cout<<"Enter Sim Card Validity:";
			cin>>simValidity;
			cout<<"Enter Telecom:";
			cin>>telecom;
		}
		void getData(){
			cout<<endl;
			cout<<"Id\t\t\t:"<<id<<endl
				<<"Name\t\t\t:"<<name<<endl
				<<"Age\t\t\t:"<<age<<endl
				<<"City\t\t\t:"<<city<<endl
				<<"Mobile No.\t\t:"<<mo_No<<endl
				<<"Sim Card Validity\t:"<<simValidity<<endl
				<<"Telecom\t\t\t:"<<telecom<<endl;
				
		}
};
 
int main(){
	Customer c;
	int i;
	for(i=0;i<5;i++){
		c.setData();
		c.getData();
		cout<<endl;
	}
	
	return 0;
}
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
