/*Q.2 Write a Program to create a Car Record System using the Class & Object of any 4 Cars.
 Consider the below-mentioned attributes in the Car class:
- car_id
- car_company_name
- car_color
- car_model
- car_release_year*/

#include<iostream>
using namespace std;
class Car{
	private:
		int car_id;
		string car_company_name;
		string car_color;
		string car_model;
		int car_release_year;
	public:
		void setData(){
			cout<<"Enter Car Id\t\t\t:";
			cin>>car_id;
			cout<<"Enter Car Company Name\t\t:";
			cin>>car_company_name;
			cout<<"Enter Car Color\t\t\t:";
			cin>>car_color;
			cout<<"Enter Car Model\t\t\t:";
			cin>>car_model;
			cout<<"Enter Car Release Year\t\t:";
			cin>>car_release_year;
		}
		void getData(){
			cout<<endl;
			cout<<"**********************************"<<endl;
			cout<<"Car Id\t\t\t\t:"<<car_id<<endl
				<<"Car Company Name\t\t:"<<car_company_name<<endl
				<<"Car Color\t\t\t:"<<car_color<<endl
				<<"Car Model\t\t\t:"<<car_model<<endl
				<<"Car Release Year\t\t:"<<car_release_year<<endl;
			cout<<"**********************************";
		}
		
};
int main(){
	int n;
	cout<<"Enter value of n:";
	cin>>n;
	
	Car c[n];
	cout<<endl;
	for(int i=0;i<n;i++){
		c[i].setData();	
	}
	
	for(int i=0;i<n;i++){
		c[i].getData();
	}
	return 0;
}
