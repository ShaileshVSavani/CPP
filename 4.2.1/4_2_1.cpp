/*Q.1 Write a Program to print the rate of interest of different banks using hierarchical inheritance:
- Class RBI -> Class SBI
- Class RBI -> Class BOB
- Class RBI -> Class ICICI
- inherit rate attribute and getROI() method in all child
classes*/
#include<iostream>
using namespace std;
class RBI{
	protected:
		float roi=5;
	public:
		void getROI(){
			cout<<"RBI roi:";
		}	
};
class SBI:public RBI{
	protected:
		float sbi_roi=roi+2;
	public:
		void getSbiRoi(){
			cout<<"SBI Interest Rate:"<<sbi_roi<<endl;
		}
};

class BOB:public RBI{
	protected:
		float bob_roi=roi+3;
	public:
		void getBobRoi(){
			cout<<"BOB Interest Rate:"<<bob_roi<<endl;
		}
};
class ICICI:public RBI{
	protected:
		float icici_roi=roi+3.5;
	public:
		void getIciciRoi(){
			cout<<"ICICI Interest Rate:"<<icici_roi<<endl;
		}
};
int main(){
	SBI s;
	BOB b;
	ICICI i;
	s.getSbiRoi();
	b.getBobRoi();
	i.getIciciRoi();
	
	return 0;
}

