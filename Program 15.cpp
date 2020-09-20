#include<iostream>

using namespace std;
class Bank{
	string name;
	long accno;
	string type;
	float bal;
	public:
		Bank(string n, long a, string t, float b){
	 		name=n;
			accno=a;
			type=t;
			bal=b;
		}
		float deposit(){
			float amt;
			cout<<"\n Enter the amount you want to deposit: ";
			cin>>amt;
			bal+=amt;
			return bal;
		}
		float withdraw(){
			float amt;
			cout<<"\n Enter amount you want to withdraw: ";
			cin>>amt;
			bal-=amt;
			return bal;
		}
		void Disp(){
			cout<<"\n Name: "<<name<<endl;
			cout<<"\n Account Number: "<<accno<<endl;
			cout<<"\n Amount Deposited Successfully!!\n Now your Balance is Rs."<<deposit()<<endl;
			cout<<"\n Amount Withdrawed Successfully!!\n Now your Balance is Rs."<<withdraw()<<endl;
		}
		
};

int main(){
	string n, t;
	float b;
	long acc;
	cout<<"\n Enter your name: ";
	getline(cin,n);
	cout<<"\n Enter you account no. ";
	cin>>acc;
	cout<<"\n Enter your account Type: ";
	cin.ignore();
	getline(cin, t);
	cout<<"\n Enter your current balance: Rs. ";
	cin>>b;
	Bank obj(n,acc,t,b);
	obj.Disp();
	return 0;
}
