#include<iostream>
#include<string>
using namespace std ;
int main(){
    int a,b,c,f;
    string d;
    char e;
    cout<<"enter your string : ";
    cin>>d;
    cout<<"enter your char : ";
    cin>>e;
    f=0;
    c=d.length();
    for(b=0;b<c;b++){
        if(d[b]==e){
            cout<<"index of char in string is : "<<b;
            f++;

        }
    }
    if(f==0){
        
            cout<<"it does not exis "<<endl;
        
    }

}