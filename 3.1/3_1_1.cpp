/*Q.1 Write a Program to create Student Record System for 5 students using Encapsulation. Consider the below-mentioned attributes in the Student class:
- stu_id
- stu_name
- stu_age
- stu_course
- stu_city
- stu_email
- stu_college*/
#include<iostream>
using namespace std;

class Student{
	private:
		int id;
		char name[30];
		int age;
		char course[50];
		char city[30];
		char email[30];
		char college[30];
	public:
		
		void setData(){
		cout<<"Enter Id:";
		cin>>id;
		cout<<"Enter Name:";
		cin>>name;
		cout<<"Enter Age:";
		cin>>age;
		cout<<"Enter Course:";
		cin>>course;
		cout<<"Enter City:";
		cin>>city;
		cout<<"Enter Email:";
		cin>>email;
		cout<<"Enter College:";
		cin>>college;
		}
		void getData(){
			cout<<"Id\t:"<<id<<endl
				<<"Age\t:"<<age<<endl
				<<"Name\t:"<<name<<endl
				<<"Course\t:"<<course<<endl
				<<"City\t:"<<city<<endl
				<<"Email\t:"<<email<<endl
				<<"College\t:"<<college<<endl;
			
		}
		
};
int main (){
	int i;
	Student s;
	for(i=0;i<5;i++){
		s.setData();
		s.getData();
		cout<<endl;
	}
	
	
}
