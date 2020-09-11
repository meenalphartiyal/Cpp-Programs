#include<iostream>
using namespace std;
int main(){
    int i,n,k,a[50],j=0,temp;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"\nEnter Elements of the array\n";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"\nYour Array is: ";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n\nEnter k: ";
    cin>>k;
    while(j<k){
        temp=a[0];
        for(i=0;i<n-1;i++){
            a[i]=a[i+1];
        }
        a[i]=temp;
        j++;
    }
    cout<<"\nUpdated Array: ";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
return 0;
}
