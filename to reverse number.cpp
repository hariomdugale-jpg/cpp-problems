#include<iostream>
using namespace std;
class reverse{
    public :
           int a;
           int c,b;
    

    void rev(){
         cout<<"enter you number in integer : ";
        cin>>a;
        c =0;
        while(a/10!=0){
            b=a%10;
            c=b+c;
            c=c*10;
            a=a/10;
            
        }
        c=a+c;
        cout<<"reverse no is "<<c;
    }



};   
int main(){
   
    reverse x;
    
    x.rev();
}
