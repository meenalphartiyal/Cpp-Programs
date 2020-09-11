#include<iostream>
using namespace std;
int main(){
    int n,i,flag=true;
    cout<<"Enter Size: ";
    cin>>n;
    int f=0,l=n-1,a[n],z[n];
    cout<<"Enter Elements: ";
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++){
        if(flag)
            z[i]=a[l--];
        else
            z[i]=a[f++];
        flag=!flag;
    }
    cout<<"Updated Array: ";
    for(i=0;i<n;i++)
        cout<<z[i]<<" ";
return 0;
}
