#include<iostream>
using namespace std;
class Box{
    private:
    int l, b, h;
    public:
    Box(){
        l=0;
        b=0;
        h=0;
    }
    Box(int length, int breadth, int height){
        l=length;
        b=breadth;
        h=height;
    }
    Box(const Box& ob ){
        l=ob.l;
        b=ob.b;
        h=ob.h;
    }
    int getLenght(){
        return l;
    }
    int getBreadth(){
        return b;
    }
    int getHeight(){
        return h; 
    }
    long long CalculateVolume(){
        return (long long) l*b*h;
    }
};
int main()
{
	Box temp;
	int l,b,h;
	cout<<"Enter Length, Breadth and Height: ";
	cin>>l>>b>>h;
	Box NewBox(l,b,h);
	temp=NewBox;
	cout<<"Volumn: "<<temp.CalculateVolume()<<endl;
	return 0;
}
