#include <iostream>
using namespace std;
class sum{
    private :
        int b,c;
    public :
    sum(int x=0){
        b=x;
    }
    sum operator +(const sum & a){
        sum d;
        d.b=b+a.b;
        return d;


    }
    void print(void){
        cout<<"sum of number is : "<<b;
    }
};
int main(){
    sum c(1);
    sum c1(2);
    sum c2;
    c2=c+c1;
    c2.print();
}