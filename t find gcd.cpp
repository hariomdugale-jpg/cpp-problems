//Question 3:
#include <iostream>
using namespace std;
int main(){
    int a,b,c,d,e,f,g,h;
    cout<<"enter your first no.\n";
    cin>>a;
    cout<<"enter your second no.\n";
    cin>>b;
   
    if(a>b){
        while(c!=0){
           c=a%b ;
           a=b;
           b=c;          
           
        }
        cout<<" the GCD is:"<<a;
     
    }else{
        while(c!=0){
            c=b%a;
            b=a;
            a=c;
        }
        cout<<" the GCD is:"<<a;
    }
}