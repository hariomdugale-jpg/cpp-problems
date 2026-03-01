#include<iostream>
using namespace std ;
class repeat{
    private :
    public :
    int sum_of_no(int a,int b){
    cout<<"Sum of two integers: "<<a+b<<endl;
     }
    double sum_of_no(double x,double y){
        cout<<"Sum of two integers: "<<x+y<<endl;
    }
    float sum_of_no(int a,int b ,int c){
        cout<<"Sum of two integers: "<<a+b+c<<endl;
    }
    
};
int main(){
    
    int a=5 ,b=5,c=5;
    double x=4,y=4.5;
    
    repeat k;
    k.sum_of_no(a,b);
    k.sum_of_no(x,y);
    k.sum_of_no(a,b,c);
}
