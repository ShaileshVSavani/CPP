/*Q.1 Write a Program to create a class to read and add two distances.
For example,
Input:
input1 => feet: 8, inch: 16
input2 => feet: 4, inch: 14

Output:
14 feet 6 inch*/
#include<iostream>
using namespace std;
class Distance{
	public:
	int feet;
	int inch;
};
int main(){
	Distance d1,d2,sum;
	cout<<"Enter first Distance:\n";
	cout<<"Feet:";
	cin>>d1.feet;
	cout<<"Inch:";
	cin>>d1.inch;
	
	cout<<"Enter second Distance:\n";
	cout<<"Feet:";
	cin>>d2.feet;
	cout<<"Inch:";
	cin>>d2.inch;
	sum.feet=d1.feet+d2.feet;
	sum.inch=d1.inch+d2.inch;
	while(sum.inch>12){
		if(sum.inch>=12){
			sum.inch=sum.inch-12;
			sum.feet=sum.feet+1;
			
		}
	}
	cout<<sum.feet<<"feet"<<sum.inch<<"inch";
	return 0;
}
