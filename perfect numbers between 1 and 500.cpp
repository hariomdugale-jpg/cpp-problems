//Question 2:
#include <iostream>
using namespace std;
int main(){
    int a,b,d;
    for(a=1;a<=500;a++){
        d=0;
        for(b=1;b<a;b++){   
            if(a%b ==0 ){
                d=d+b;            
            }
        }
        if(d==a){
            cout<<a<<"\n";
        }


       
    }
    
}