#include <iostream>
using namespace std;
class Base{
public:
    Base() {
        cout << "Base class constructor called" << endl;
    }
};
class Derived : public Base{
public:
    Derived() {
        cout << "Derived class constructor called" << endl;
    }
};
int main(){
    Base *bp = new Derived;  
    Derived *dp = new Derived;  
    return 0;
}