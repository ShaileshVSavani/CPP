#include<iostream>
#include<string>
using namespace std;
class login{
	private:
		string cpy1,cpy2,str1,str2;
		
	public:
		void setData(){
			cout<<"Enter email:";
			cin>>cpy1;
			cout<<"Enter Password:";
			cin>>cpy2;	
		}
		void getData(){
				if(cpy1==str1&&cpy2==str2{
					cout<<"Login Successful";
				}
				else{
					cout<<"Login Failed. Invalid Credentials.";
				}	
		}
		login(){
			 str1="admin@gmail.com";
			 str2="123456";
		}
		
};
int main(){
//	login l;
//	l.setData();
//	l.getData();
}
