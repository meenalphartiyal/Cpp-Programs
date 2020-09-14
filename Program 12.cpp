#include<iostream>
using namespace std;
class Student{
	private:
		int scores[5];
		int total;
	public:
		Student(){
			total=0;
		}
		void input(){
			int i;
			for(i=0;i<5;i++){
				cin>>scores[i];
				total+=scores[i];
			}
		}
		int calculateTotalScore(){
			return total;
		}
};

int main(){
	int i;
    Student s[2];
    for(i=0;i<2;i++){
    	cout<<"Enter marks in 5 subjects for student "<<i+1<<" : ";
        s[i].input();
    }
    int t1,t2;
    t1=s[0].calculateTotalScore();
    t2=s[1].calculateTotalScore();
	if (t1>t2)
		cout<<"Student 1 has better marks!";
	else
		cout<<"Student 2 has better marks!";
	return 0;
}
