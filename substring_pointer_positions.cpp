#include <iostream>
#include <string>
using namespace std;
int main(){
    int d,e,f,g;
    string a,b;
    char *c,*z;
    cout<<"Enter the string: ";
    getline(cin,a);
    cout<<"Enter the substring: ";
    getline(cin,b);
    c = &a[0];
    z = &b[0];
    d = a.length();
    e = b.length();
    for(f=0; f<=d-e; f++){
        g = 0;
        while(g < e){
            if(*(c + f + g) != *(z + g)){
                break;
            }
            g++;
        }
        if(g == e){
            cout<<"Position "<<f<<endl;
        }
    }
    return 0;
}