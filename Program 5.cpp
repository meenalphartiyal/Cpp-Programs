#include<iostream>
using namespace std;

int main(){
    int i,j=0,n,low,high;
    cout<<"  Enter size of array: ";
    cin>>n;
    int a[n],z[n];
    cout<<"\n  Enter elements: ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"\n  Enter range (low then high): ";
    cin>>low>>high;
    for(i=0;i<n;i++){
        if(a[i]<low){
            z[j]=a[i];
            j++;
        }
    }
    for(i=0;i<n;i++){
        if(a[i]>=low && a[i]<=high){
            z[j]=a[i];
            j++;
        }
    }
    for(i=0;i<n;i++){
        if(a[i]>high){
            z[j]=a[i];
            j++;
        }
    }
    cout<<"\n  Updated Array: ";
    for(i=0;i<n;i++){
        cout<<z[i]<<" ";
    }
return 0;
}
