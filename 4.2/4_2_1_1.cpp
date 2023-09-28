 #include <iostream>
using namespace std;

class RBI {
protected:
    double rate;

public:
    RBI(double r) : rate(r) {}

    void getROI() {
        cout << "Rate of Interest: " << rate << "%" << endl;
    }
};

class SBI : public RBI {
public:
    SBI(double r) : RBI(r) {}
};

class BOB : public RBI {
public:
    BOB(double r) : RBI(r) {}
};

class ICICI : public RBI {
public:
    ICICI(double r) : RBI(r) {}
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

