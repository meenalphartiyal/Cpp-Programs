#include<iostream>
using namespace std;
class Employee{
	int s;
	int n_of_hrs;
	string name;
	string date;
	string add;
	public:
		Employee(){
			s=0;
		}
		void SetInfo(){
			cout<<"\n  Enter name: ";
			cin>>name;
			cout<<"  Enter Date of Joining: ";
			cin>>date;
			cout<<"  Enter Address of the employee: ";
			cin.ignore();
			getline(cin,add);
			cout<<"  Enter Salary: ";
			cin>>s;
			cout<<"  Enter number of hours of work per day: ";
			cin>>n_of_hrs;
		}
		void AddSal(){
			if (s<700){
				s+=50;
			}
		}
		void AddWork(){
			if(n_of_hrs>6){
				s+=25;
			}
		}
		int getSalary(){
			return s;
		}
		void to_string(){
			cout<<"  "<<getSalary()<<"\t\t"<<n_of_hrs<<"\t";
		}
};
int main(){
	Employee emp;
	cout<<"\n  Details of the Employee\n";
	emp.SetInfo();
	emp.AddSal();
	emp.AddWork();
	cout<<"\n  Salary\tHours of work per day\n";
	emp.to_string();
	return 0;
}
