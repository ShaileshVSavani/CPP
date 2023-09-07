/*
Q.2 Write a Program to read time in seconds and convert it into time in (HH:MM:SS) format.
For example,
Input:
Enter seconds: 4520

Output:
1:15:20*/

#include<iostream>
using namespace std;

class Time{
	public:
		int H;
		int M;
		int S;
};

int main(){
	Time t;
	cout<<"Enter Second:";
	cin>>t.S;
	while(t.S>60){
		if(t.S>=60){
			t.S=t.S-60;
			t.M++;
			if(t.M>=60){
				t.M=t.M-60;
				t.H++;
			}
		
		}
	}
	cout<<t.H<<":"<<t.M<<":"<<t.S;
	
	return 0;
}
