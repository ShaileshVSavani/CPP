#include<iostream>
using namespace std;

class Google{
	protected:
		string username;
		string psw;
	public:
		Google(){
			string p1, p2;
			cout<<"Enter username :";
			cin>>username;
			
			do{
				cout<<"Creat password :";
				cin>>p1;
				cout<<"Confirm password :";
				cin>>p2;
				
				if(p1!=p2){
					cout<<"Password mismatch!!"<<endl;
				}
			}while(p1!=p2);
			
			psw=p1;
			cout<<"Logged in successfully"<<endl;
		}
		void SignIn(){
			string u, p;
			while(true){
				cout<<"Enter username :";
				cin>>u;
				cout<<"Enter password :";
				cin>>p;
				
				if(u==username && p==psw){
					cout<<"Signed in successfully"<<endl;
					return;
				}
				else{
					cout<<(u!=username?"Invalid username":"Invalid password")<<endl;
				}
			}
		}
		void signOut(){
			
		}
		string getPassword(){
			return psw;
		}
		void setPassword(string newPassword){
			psw=newPassword;
		}
};
class Amazone : private Google{
	public:
		void SignInWithGoogle(){
			SignIn();
		}
		void ChangePassword(){
			string oldpsw, newpsw, confirmpsw;
			
			cout<<"Enter your old password :";
			cin>>oldpsw;
			
			if(oldpsw==getPassword()){
				do{
					cout<<"Enter New Password :";
					cin>>newpsw;
					
					if(newpsw==getPassword()){
						cout<<"Same as old"<<endl;
						continue;
					}
					cout<<"Confirm password :";
					cin>>confirmpsw;
					
					if(newpsw!=confirmpsw){
						cout<<"password mismatch"<<endl;
					}
				}while(newpsw!=confirmpsw);
				
				setPassword(newpsw);
				cout<<"Done!!";
			}
			else{
				cout<<"password mismatch";
			}
		}
};
int main(){
	Amazone a;
	a.SignInWithGoogle();
	a.ChangePassword();
	return 0;
}
