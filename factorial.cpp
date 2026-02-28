#include <iostream>
using namespace std;
class factorial{
    private:
        int a,b,c,d;
    public :
    void fact(){
        cin>>a;
         cout<<"factor are  :";
        if(a!=0){
            c=1;
            while(a!=0){
            b=1;
            b=b*a;
            c=c*a;
            cout<<b<<"*";
            a=a-1;
         }
         cout<<endl;
         cout<<"factorial is : "<<c;
         
        }else if(a=0){
            cout<<"factorial is : 1";
        } else{
            cout<<"invalid input";
        }
    }
    }    
;
int main(){
    cout<<"enter your number : ";
    factorial x;
    x.fact();
    
}