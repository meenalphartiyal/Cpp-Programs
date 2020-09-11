#include <iostream>

using namespace std;

int main()
{
    int x,a,b;
    cout<<"\tEnter 2 Numbers: ";
    cin>>a>>b;
    cout<<"\t1. Add"<<"\n\t2. Sub"<<"\n\t3. Multiply"<<"\n\t4. Divide"<<"\n\tEnter Your Choice: ";
    cin>>x;
    switch(x){
        case 1: cout<<"\t"<<a+b;
            break;
        case 2: cout<<"\t"<<a-b;
            break;
        case 3: cout<<"\t"<<a*b;
            break;
        case 4: cout<<"\t"<<a/b;
            break;
        default: cout<<"\tWRONG CHOICE!";
    }
    return 0;
}
