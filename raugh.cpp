#include<iostream>
#include<string>
using namespace std;

int main (){
    int a,b,c,d,i,o,e;
    string g;

    cout<<"enter your sentence : "<<endl;
    getline(cin,g);

    b=g.length();
    i=0;
    e=0;
    d=0;
    o=0;

    for(a=0;a<b;a++){
                
        if((g[a]>='a' && g[a]<='z') || (g[a]>='A' && g[a]<='Z')){
            d++;
        }else{
            e=d;
            d=0;

            if(e>=i){
                i=e;
                o=a-1;   // word ends before space
            }
        }

        if(a==b-1){
            e=d;
            if(e>=i){
                i=e;
                o=a;
            }
        }
    }

    cout<<endl;
    cout<<"largest word of sentence is of length : "<<i<<endl;
    cout<<"largest word in sentence : ";

    for(c=o-i+1;c<=o;c++){
        cout<<g[c];
    }

    return 0;
}