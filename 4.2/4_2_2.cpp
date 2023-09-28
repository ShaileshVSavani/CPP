/*Q.2 Write a Program to perform four different numbers’ sum by
 inheriting constructors in hybrid inheritance.*/
 
 #include <iostream>
using namespace std;

class Number {
	protected:
	    int num;
	
	public:
	    Number(int n){
			num=n;
		}
};

class Sum : public Number {
	protected:
	    int result;
	
	public:
	    Sum(int a, int b) : Number(a), result(a + b) {}
	
	    int getResult() {
	        return result;
	    }
};

class HybridSum : public Sum {
	private:
	    int fourthNum;
	
	public:
	    HybridSum(int a, int b, int c, int d) : Sum(a, b), fourthNum(d) {
	        result += c + d;
	    }
	
	    int getFourthNum() {
	        return fourthNum;
	    }
};

int main() {
    int num1 = 5, num2 = 10, num3 = 15, num4=20;

    HybridSum hybrid(num1, num2, num3, num4);

    cout << "First Number: " << num1 << endl;
    cout << "Second Number: " << num2 << endl;
    cout << "Third Number: " << num3 << endl;
    cout << "Fourth Number: " << hybrid.getFourthNum() << endl;

    cout << "Sum of all four numbers: " << hybrid.getResult() << endl;

    return 0;
}

