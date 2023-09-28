#include<iostream>
#include<string>
using namespace std;

class DiamondCompany{
	private:
		int comp_id;
		string comp_name;
		int comp_staff_quantity;
		double comp_rev;
		int comp_import_raw_diamonds;
		int comp_export_diamonds;
		string comp_ceo;
	
	public:
		
		//default contructor
	 	DiamondCompany(){
	 		comp_id=0;
	 		comp_name = "";
	 		comp_staff_quantity = 0;
	 		comp_rev = 0.0;
	 		comp_import_raw_diamonds=0;
	 		comp_export_diamonds=0;
	 		comp_ceo= "";
		 }
		 
		 
		 DiamondCompany(
		 	int id,
	     	string name,
		    int staff_quantity,
		    double rev,
		    int import_raw_diamonds,
		    int export_diamonds,
	    	string ceo
			){
			comp_id = id;	
			comp_name = name;
			comp_staff_quantity=staff_quantity;
			comp_rev = rev;
			comp_import_raw_diamonds = import_raw_diamonds;
			comp_export_diamonds = export_diamonds;
			comp_ceo = ceo;
		 }
		 
		 void display(){
		 	cout<<"-----------"<<endl;
		 	cout<<"comp_id "<<comp_id<<endl;
		 	cout<<"comp_name "<<comp_name<<endl; 	
			cout<<"comp_staff_quantity "<<comp_staff_quantity<<endl; 	
			cout<<"comp_rev "<<comp_rev<<endl; 	
			cout<<"comp_import_raw_diamonds "<<comp_import_raw_diamonds<<endl;
			cout<<"comp_export_diamonds "<<comp_export_diamonds<<endl;
			cout<<"comp_ceo "<<comp_ceo<<endl; 	
		 }	 
};



//	[Error] no matching function for call to 'DiamondCompany::DiamondCompany()'

int main()
{
	const int max_diamond_com=10;
	DiamondCompany comp[max_diamond_com];
	int n;
	cout<<"Enter the number n : ";
	cin>>n;
	
	for(int i = 0; i<n;i++){
		int id, staff , import_diamonds , export_diamonds;
		double revenue;
		string ceo, name;
		
		cout<<"Enter com id :";
		cin>>id;
	
		cout<<"Enter com name :";
		cin>>name;
		
		
		cout<<"Enter com staff : ";
		cin>>staff;
		
		cout<<"Enter com revenue :";
		cin>>revenue;
		
		cout<<"Enter com import_diamonds :";
		cin>>import_diamonds;
		
		cout<<"Enter com export_diamonds :";
		cin>>export_diamonds;
		
		cout<<"Enter com ceo :";
		cin>>ceo;
		
		comp[i]=DiamondCompany(	 id, name, staff, revenue, import_diamonds, export_diamonds,
	    	 ceo);
	}
	
	cout<"Display diamond com :";
	for(int i = 0; i<n;i++){
		comp[i].display();
	}
	
	
}
