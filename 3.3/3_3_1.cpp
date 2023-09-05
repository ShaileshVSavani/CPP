/*Q.1 Write a Program to get and display N numbers of Diamond companies information 
using encapsulation and use of Parameterised Constructor by including below
mentioned attributes:
- comp_id
- comp_name
- comp_staff_quantity
- comp_revenue (per year)
- comp_import_raw_diamonds (no. of raw diamonds
imported per year)
- comp_export_diamonds (no. of diamonds per year)
- comp_ceo (name of CEO of the company)*/

#include<iostream>
#include<string>
using namespace std;

class DimondCompany{
	private:
		int comp_id;
		string comp_name;
		int comp_staff_quantity;
		double comp_revenue;
		int comp_import_raw_diamonds ;
		int comp_export_diamonds ;
		string comp_ceo;
	public:
		DimondCompany(int id, string name, int staff_qnty,double revenue,
		int import_qnty,int export_qnty,string ceo){
			comp_id=id;
			comp_name=name;
			comp_staff_quantity=staff_qnty;
			comp_revenue=revenue;
			comp_import_raw_diamonds=import_qnty;
			comp_export_diamonds=export_qnty;
			comp_ceo=ceo;
			
			cout<<"hello";	
		}
		void displayCompInfo(){
			cout<<"Company Id\t:"<<comp_id<<endl
				<<"Company Name\t:"<<comp_name<<endl
				<<"Company Staff Quantity\t:"<<comp_staff_quantity<<endl
				<<"Company Annual Revenue\t:"<<comp_revenue<<endl
				<<"Imported Raw Diamonds\t:"<<comp_import_raw_diamonds<<endl
				<<"Exported Diamonds\t:"<<comp_export_diamonds<<endl
				<<"Company CEO\t:"<<comp_ceo<<endl;
		}
};
int main(){
//	int n,i;
//	cout<<"Enter value of n:";
//	cin>>n;
	
	DimondCompany D(int id, string name, int staff_qnty, double revenue, int import_qnty,
	 				int export_qnty, string ceo );
		
//	for(i=0;i<n;i++){
//		D.displayCompInfo();
//		
//	}
}
