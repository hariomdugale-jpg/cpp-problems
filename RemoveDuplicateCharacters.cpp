//Write a C++ program to remove duplicate characters from a string without using set or STL containers.
#include<iostream>
using namespace std;
int main(){
    int a,b,c,f;
    string d,e;
    cout<<"enter your string : ";
    cin>>d;

    a=d.length();
    
    for(b=0;b<a;b++){
         f=0;
         c=0;
         while(c<b && f==0){
         if(d[b]==d[c]){
            f++;
            
         }
         
         c++;
         }
         if(f==0){
            cout<<d[b];
            f++;
         }
     }
}