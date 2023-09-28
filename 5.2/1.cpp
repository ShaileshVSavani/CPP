/*Q.1 Write a Program to overload < operator to find
 which object contains a higher value from given 2 numbers.*/
 
 #include <iostream>
 using namespace std;

class Number {
private:
    int value;

public:
	//Number(int val) : value(val) {}
    Number(int val) {
        value = val;
    }

    // Overload the < operator
    bool operator<( Number &other) {
        return value <other.value;
    }

    int getValue(){
        return value;
    }
};

int main() {
    Number num1(5);
    Number num2(8);

    if (num1 < num2) {
        cout << "num2 contains a higher value: " << num2.getValue() <<endl;
    } else {
        cout << "num1 contains a higher value: " << num1.getValue() <<endl;
    }

    return 0;
}

