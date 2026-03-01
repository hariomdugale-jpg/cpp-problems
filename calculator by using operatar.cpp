#include <iostream>
#include<string>
using namespace std;
void calculate(int a,int b);
int main(){
    int a,b;
    string d[1];
   
    cout<<"enter your first no."<<endl;
    cin>>a;
    cout<<"enter your second no."<<endl;
    cin>>b;
    cout<<"enter  a mathematical operator (+,-,*,/,^) : "<<endl;
    
    calculate(a,b);
       

}



void calculate( int a,int b){
    int c,e,f;
    string d[1];
    cin>>d[0];
    string chars[5] = {"+","-","*","/","^"};
    if(d[0] == chars[0]){
        c = a+b;
        cout<<"sum of two no. is is : "<<c<<endl;
    }else if (d[0] == chars[1] )
    {
        c=a-b;
        cout<<"sub of two no. is is : "<<c<<endl;
    }else if(d[0] == chars[2])
    {
        c=a*b;
        cout<<"multiply of two no. is is : "<<c<<endl;

    }else if(d[0]==chars[3])
    {
        if(b!=0){
            c=a/b;
            cout<<"division of to no. is :"<<c<<endl;
        }else{cout<<"wrong no enter"<<endl;
            
        }
    }else{c=1;
        for(f=0;f<b;f++){
        
        c=c*a;
        

        } 
        cout<<"a to the power b is :"<<c;

    }
    
  
    
   
        
    
    

}