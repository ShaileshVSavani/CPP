/*Q.1 Write a Program to overload < operator to find which object contains a higher value from given 2 numbers.*/
#include<iostream>
using namespace std;

class Number {
private:
    int value;
public:
    Number(int val) {
        value = val;
    }

    bool operator<( Number a) {
        return value <a.value;
    }

    int getValue(){
        return value;
    }
};

int main() {
    Number n1(13);
    Number n2(11);

    if (n1 < n2) {
        cout << "n2 contains a higher value: " << n2.getValue() <<endl;
    } else {
        cout << "n1 contains a higher value: " << n1.getValue() <<endl;
    }

    return 0;
}

