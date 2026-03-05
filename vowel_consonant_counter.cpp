#include<iostream>
#include<string>
using namespace std ;

int main(){
    int a,b,e,f;
    string c,d;
    cout<<"enter your string :";
    cin>>c;
    b=c.length();
    e=0;
    f=0;
    for(a=0;a<b;a++){
        if( c[a]>='a' && c[a]<='z' ){
            if(c[a]=='a' ||c[a]=='e' ||c[a]=='i' ||c[a]=='o'||c[a]=='u'){
                          e++;
            }else{
            f++;
        }
                  
        }
    }
    cout<<"no of vowels is :"<<e<<endl;
    cout<<"no. of consonants"<<f<<endl;
    return 0;


    
}