/*Q.1 Write a Program to get and display N numbers of Hotels and static information using Encapsulation with an array of objects member by including the below-mentioned attributes:
- hotel_id
- hotel_name
- hotel_type (like hotel or motel)
- hotel_rating (like 1 Star, 2 Start, ..., 7 Star)
- hotel_location (city name)
- hotel_establish_year
- hotel_staff_quantity
- hotel_room_quantity*/
#include<iostream>
using namespace std;

ostream &tab(ostream &op){
	return op<<"\t";
}

class Hotel{
	private:
	    int id;
		string name;
		string hotelType;
		int hotelRating;
		static string city;
		int estYear;
		int staffQuan;
		int roomQuan;
		static int counter;
	public:
		void setData(){
			id=counter++;
			cout<<"Enter Name\t:";
			cin>>name;
			cout<<"Enter Hotel Type\t:";
			cin>>hotelType;
			cout<<"Enter Hotel Rating\t:";
			cin>>hotelRating;
			cout<<"Enter Hotel Establish Year\t:";
			cin>>estYear;
			cout<<"Enter Hotel Staff Quantity\t:";
			cin>>staffQuan;
			cout<<"Enter Hotel Room Quantity\t:";
			cin>>roomQuan;
		}
		void getData(){
			cout<<"Id\t:"<<id<<endl
				<<"Hotel Name\t:"<<name<<endl
				<<"City\t:"<<city<<endl
				<<"Hotel Type\t:"<<hotelType<<endl
				<<"Hotel Rating\t:"<<hotelRating<<endl
				<<"Hotel Establish Year"<<estYear<<endl
				<<"Hotel Staff Quantity"<<staffQuan<<endl
				<<"Hotel Room Quantity"<<roomQuan<<endl;
		}
			void tableRow(){
			cout<<id<<tab<<name<<tab<<tab<<city<<tab<<tab<<hotelType<<tab<<tab<<hotelRating<<tab<<tab
				<<estYear<<tab<<tab<<staffQuan<<tab<<tab<<roomQuan<<endl;
		}
		static void header(){
			cout<<"Id\tName\t\tCity\t\tH.Type\t\tRating\t\tE.Year\t\tS.Quantity\tR.Quantity\n=======\t=======\t\t=======\t\t======\t\t=======\t\t=======\t\t=======\t\t=========\n";
		}
		
};
string Hotel::city="Surat";
int Hotel::counter=1;

int main(){
	int n;
	cout<<"Enter n:";
	cin>>n;
	
	Hotel h[n];
	
	for(int i=0;i<n;i++){
			h[i].setData();	
	}
	Hotel::header();
	for(int i=0;i<n;i++){
		h[i].tableRow();
	}

	return 0;
}
