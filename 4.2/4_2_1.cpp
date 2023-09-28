/*Q.1 Write a Program to print the rate of interest of different banks using hierarchical inheritance:
- Class RBI -> Class SBI
- Class RBI -> Class BOB
- Class RBI -> Class ICICI
- inherit rate attribute and getROI() method in all child
classes*/
#include <iostream>
using namespace std;

class RBI {
	protected:
	    double rate;
	
	public:
	    void setRate(double r) {
	        rate = r;
	    }
	
	    void getROI() {
	        cout << "Rate of Interest: " << rate << "%" << endl;
	    }
};

class SBI : public RBI {
	public:
	    SBI(double r) {
	        setRate(r);
	       // cout << "SBI constructor called" << endl;
	    }
};

class BOB : public RBI {
	public:
	    BOB(double r) {
	        setRate(r);
	     //   cout << "BOB constructor called" << endl;
	    }
};

class ICICI : public RBI {
	public:
	    ICICI(double r) {
	        setRate(r);
	       // cout << "ICICI constructor called" << endl;
	    }
};

int main() {
    double sbiRate = 5.0;
    double bobRate = 4.8;
    double iciciRate = 6.2;

    SBI sbi(sbiRate);
    BOB bob(bobRate);
    ICICI icici(iciciRate);

    cout << "SBI Bank:" << endl;
    sbi.getROI();

    cout << "BOB Bank:" << endl;
    bob.getROI();

    cout << "ICICI Bank:" << endl;
    icici.getROI();

    return 0;
}

