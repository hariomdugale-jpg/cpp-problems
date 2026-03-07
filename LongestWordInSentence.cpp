#include<iostream>
#include<string>
using namespace std ;
int main (){
    int a,b,c,d,i,o,e;
    string g,h;
    cout<<"enter your sentence : "<<endl;
    getline(cin,g);
    b=g.length();
    i=0;
    e=0;
    d=0;
    o=0;
    for(a=0;a<b;a++){
                
        if(g[a]<='z' && g[a]>='a' || g[a]<='Z' && g[a]>='A'){
            d++;

        }else {
             e=d;
             d=0;
        }
        if(a==b-1){
            e=d;
          
        }
        if(e>=i){
            i=e;
            o=a;
            e=0;

        }
        }
       cout<<b;
       cout<<o;
        cout<<endl;
        cout<<"largest word of sentence is of length  : "<<i<<endl;
        cout<<"largest word in sentence : ";
        for(c=o-i;c<o+1;c++){
            cout<<g[c];
        }
             return 0;

 }

