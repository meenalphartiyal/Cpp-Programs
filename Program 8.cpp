#include<iostream>
using namespace std;
class Room{
public:
    int length,breadth,height;
    int calculateArea();
    int calculateVolume();
};
Room::calculateArea(){
return (2*(length*breadth+length*height+breadth*height));
}
Room::calculateVolume(){
return length*breadth*height;
}
int main(){
    Room ob;
    cout<<"  Enter Length of the room: ";
    cin>>ob.length;
    cout<<"  Enter Breadth of the room: ";
    cin>>ob.breadth;
    cout<<"  Enter Height of the room: ";
    cin>>ob.height;
    cout<<"  Area of Room: "<<ob.calculateArea()<<" sqr mtrs\n  Volume of Room: "<<ob.calculateVolume()<<" cubic mtrs";
return 0;
}
