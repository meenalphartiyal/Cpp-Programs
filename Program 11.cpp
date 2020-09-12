#include <iostream>
#include <sstream>
using namespace std;

class Student{
    private:
    	int a, s;
    	string fn,ln;
    public:
        void set_age(int age){
        	a=age;
    	}
	    void set_first_name(string first_name){
	        fn=first_name;
	    }
	    void set_last_name(string last_name){
	        ln=last_name;
	    }
	    void set_standard(int standard){
	        s=standard;
	    }
	    int get_age(){
	        return a;
	    }
	    string get_first_name(){
	        return fn;
	    } 
	    string get_last_name(){
	        return ln;
	    }
	    int get_standard(){
	        return s;
	    }
	    string to_string(){
	        stringstream ss;
	        char c=',';
	        ss<<a<<c<<fn<<c<<ln<<c<<s;
	        return ss.str();
	    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cout<<"Enter age: ";
    cin>>age;
	cout<<"Enter First Name: ";
	cin>>first_name;
	cout<<"Enter Last Name: ";
	cin>>last_name;
	cout<<"Enter Standard: ";
	cin>>standard;
    
    Student st;
    
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout<<"\n";
    cout<<st.to_string();
    
    return 0;
}
