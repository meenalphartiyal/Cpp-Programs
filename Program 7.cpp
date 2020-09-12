#include<iostream>
#include<ctype.h>
using namespace std;
void Palindrome(string s){
int f=0;
int l=s.size()-1;
while(l>1)
    if(s[l--]!=s[f++]){
        cout<<"  "<<s<<" is not a Palindrome!";
        return;
    }
cout<<"  "<<s<<" is a Palindrome";
}

int main(){
    string str;
    cout<<"  Enter a String: ";
    getline(cin, str);
    Palindrome(str);
return 0;
}
