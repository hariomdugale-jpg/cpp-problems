#include<iostream>
using namespace std ;
class Count{
    public:
    
    Count(){
        int a,b;
        for(a=0;a<10;a++){
            cout<<a<<endl;
        } 
    }
    ~Count(){
        cout<<"destructor run succefully"<<endl;
    }
};

int main (){
    Count x;
    return 0;
}