#include<iostream>
using namespace std;
void max_two(int,int);
int main(){
    int a,b;
    cout<<"enter your first no. a : ";
    cin>>a;
    cout<<"enter your second no. b :";
    cin>>b;
    max_two(a,b);
}
void max_two(int a,int b){
    if(a>b){ 
        cout<<"maximum no.is :"<<a;

    }else if(b>a){
        cout<<"maximum no. is :"<<b;

    }else{
        cout<<"both a and b have equal value ";
    }
}