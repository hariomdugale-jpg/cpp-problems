#include<iostream>
using namespace std ;
int main (){
    int a,b,c;
    cout<<"Enter numerator : ";
    cin>>a;
    cout<<"Enter denominator: ";
    cin>>b;
    try{
       if(b==0){
        throw c=1;
       }
       cout<<"division of a and b is :"<<a/b;
    }
    catch(int c){
        cout<<"invalid input .error no."<<c;
    }
}