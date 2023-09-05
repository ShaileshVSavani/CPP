/*Q.1 Write a Program to make Railway Reservation System.
Requirements:
(A) User Input: 
- Train Number
- Train Name
- Source
- Destination
- Train Time
(B) Display Records: 
- All Records
- By Searching Train Number
(C) Minimum 3 Input Train Records
*/

#include<iostream>
using namespace std;
class Railway{
	public:
		int trainNo;
		string trainName;
		string source;
		string destination;
		int time;
	public:
		void setData(){
			cout<<"Enter Train No:";
			cin>>trainNo;
			cout<<"Enter Train Name:";
			cin>>trainName;
			cout<<"Source:";
			cin>>source;
			cout<<"Destination:";
			cin>>destination;
			cout<<"Train Time:";
			cin>>time;
		}
		void getData(){
			cout<<"Train No\t:"<<trainNo<<endl
				<<"Train Name\t:"<<trainName<<endl
				<<"Source\t:"<<source<<endl
				<<"Destination\t:"<<destination<<endl
				<<"Train time\t:"<<time<<endl;	
		}
};
int main(){
	int n;
	cout<<"Enter value of n:";
	cin>>n;
	Railway t[n];
	cout<<endl;
	for(int i=0;i<n;i++){
		t[i].setData();	
	}
	
	for(int i=0;i<n;i++){
		t[i].getData();
	}
	
	int searchNo;
	cout<<"Enter NO of train to search:";
	cin>>searchNo;

	for(int i=0;i<n;i++){
		if(t[i].trainNo==searchNo){
			t[i].getData();
		}
	}
	return 0;
}
