/*Q.2 Write a Program to add two distances using binary plus (+) operator overloading.

For example,
Input:
input1 => Km: 3, Meter: 1020
input2 => Km: 2, Meter: 2050

Output:
Km: 8, Meter: 70*/

#include <iostream>
using namespace std;

class Distance {
private:
    int km;
    int meter;

public:
   Distance(int k=0, int m=0){
   	km=k;
   	meter=m;
   }

    // Overload the + operator
    Distance operator+( Distance d) {
        Distance result;
        result.km = km + d.km;
        result.meter = meter + d.meter;

        // Adjust the values if meter exceeds 1000
        if (result.meter >= 1000) {
            result.km =result.km + result.meter / 1000;
            result.meter =result.meter % 1000;
        }

        return result;
    }

    void display() {
        cout << "Km: " << km << ", Meter: " << meter <<endl;
    }
};

int main() {
    Distance input1(3, 1020);
    Distance input2(2, 2050);

    Distance sum = input1 + input2;

    cout << "Input1: ";
    input1.display();

    cout << "Input2: ";
    input2.display();

    cout << "Output: ";
    sum.display();

    return 0;
}

