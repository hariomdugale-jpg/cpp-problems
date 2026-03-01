#include <iostream>
#include <string>
using namespace std ;
int main(){
    int a,b,c,d,e,f,g;
    cout<<"enter your length of string "<<endl;
    cin>>a;
    string chars;
    cout<<"enter your string"<<endl;
    for(b=0;b<a;b++){
        cin>>chars[b];
    }
    for(b=0;b<a;b++){
        d=0;
        for(c=0;c<a;c++){
            if (chars[b]==chars[c]){
                d+=1;                
            }
        }
        cout<<chars[b]<<"="<<d<<endl;
    }
    
    for(b=0;b<a;b++){
        cout<<chars[b];

    }


    
}