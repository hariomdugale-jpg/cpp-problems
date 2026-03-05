#include<iostream>
#include<string>
using namespace std ;
int main(){
    int a,b,c,e,f,g;
    string d;

    cout<<"enter your string : ";
    cin>>d;
    b=d.length();
    cout<<"duplicate charater :"<<endl;
    for(a=0;a<b;a++){
         f=0;
        g=0;
        for(c=0;c<b;c++){            
                if(d[a]==d[c] && c!=a){
                f++;
            
            }
        }
            if(f!=0){
            for(e=0;e<a;e++){
                if(d[e]==d[a]){
                    g++;
                }
            }
            if(g==0){
                cout<<d[a]<<endl;
            }
        }
    
    }
}