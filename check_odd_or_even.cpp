//Question 2:
#include <iostream>
using namespace std ;
int main() {
    int a, b , c;
    cout<<"enter your no. in integers to check even or odd "<<endl;
    cin>>a;
    if(a==0){
        cout<<"Neither even nor odd"<<endl;
    }else if(a%2==0){
        cout<<"your number is even no."<<endl;
    }else{
        cout<<"your no. is odd no. "<<endl;
    }
    return 0;
}