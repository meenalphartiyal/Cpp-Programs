#include<iostream>
using namespace std;
int main(){
    int i,j=0,k=0,x,p=0,n=0;
    cout<<"Enter size of array: ";
    cin>>x;
    int a[x],z[x];
    cout<<"\nEnter Elements of the array\nContaining both positive & negative elements\n";
    for(i=0;i<x;i++){
        cin>>a[i];
        if (a[i]>=0)
            p++;
        else
            n++;
    }
    int pa[p],na[n];
    for(i=0;i<x;i++){
        if(a[i]>=0){
            pa[j]=a[i];
            j++;
        }
        else{
            na[k]=a[i];
            k++;
        }
    }

    if(p>n){
        j=0;    k=0;
        for(i=1;i<n*2;i+=2){
            z[i]=na[j];
            j++;
        }
        for(i=0;i<2*n;i+=2){
            z[i]=pa[k];
            k++;
        }
        for(i=2*n;i<x;i++){
            z[i]=pa[k];
            k++;
        }
    }
    else if(n>p){
        j=0;    k=0;
        for(i=1;i<p*2;i+=2){
            z[i]=pa[j];
            j++;
        }
        for(i=0;i<2*p;i+=2){
            z[i]=na[k];
            k++;
        }
        for(i=2*p;i<x;i++){
            z[i]=na[k];
            k++;
        }
    }
    else if(n==p){
        j=0;    k=0;
        for(i=0;i<x;i+=2){
            z[i]=na[j];
            j++;
        }
        for(i=1;i<x;i+=2){
            z[i]=pa[k];
            k++;
        }
    }
    cout<<"\nUpdated Array is: ";
    for(i=0;i<x;i++){
        cout<<z[i]<<" ";
    }
return 0;
}
