/*Q.2 Write a Program to convert a given degree Celsius temperature into
 Fahrenheit and convert that Fahrenheit temperature into Kelvin by implementing multilevel inheritance: Class P -> Class Q -> Class R
- Class P has the following members: temperature attribute in float
- Class Q has the following members: toFehrenheit() method
- Class R has the following members: toKelvin() method*/

#include<iostream>
using namespace std;

class P{
	public:
		float temp;
		float Fahrenheit;
		float Kelvin;
};
class Q:public P{
	public:
		void toFehrenheit(){
			cout<<"Enter Temperature in Celsius:";
			cin>>temp;
			
			Fahrenheit=(temp * 1.8) + 32 ;
		
			cout<<"Celsius temperature into Fahrenheit:"<<Fahrenheit<<endl;
		}
	
};
class R:public Q{
	public:
		void toKelvin(){
			Q q;
			
		
		//	Kelvin=temp + 273.15;
			Kelvin= ((Fahrenheit-32)*(5/9))+273.15;
	
			cout<<"Fahrenheit temperature into Kelvin:"<<Kelvin<<endl;
	
		} 
	
};
int main(){
	
	Q q;
	R r;
	q.toFehrenheit();
	r.toKelvin();
	return 0;
}


