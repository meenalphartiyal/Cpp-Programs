#include<iostream>
using namespace std;
int main(){
    int n,i,j=0;
    cout<<"Enter Size: ";
    cin>>n;
    int a[n];
    cout<<"Enter Elements: ";
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        if(a[i]%2==0){
            int temp=a[j];
            a[j]=a[i];
            a[i]=temp;
            j++;
        }
    cout<<"Updated Array: ";
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
return 0;
}
