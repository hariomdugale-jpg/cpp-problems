#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the length of string"<<endl;
    cin>>a;

    cout<<"enter your string" <<endl;
    
    string strings,charc;

    for(b=0;b<a;b++){

        cin>>strings[b];
    }
    cout<<"enter your character"<<endl;
    cin>>charc[0];
    c=0;
    for(b=0;b<a;b++){
        if(strings[b]==charc[0]){
            cout<<"the index of character in string is : "<<b<<endl;
            c=1;

        }
                    

    }
    if(c==0){
            cout<<" character does not exist";
    }

   
}