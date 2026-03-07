//Write a C++ program that reverses each word in a sentence but keeps the word order the same.
#include<iostream>
using namespace std ;
int main (){
    int a,b,c,d,e;
    string f,g;
    c=0;
    cout<<"enter your sentence that you want to be reverse : "<<endl;
    getline(cin,f);
    a=f.length();
    cout<<"reverse sentence is : ";
    for(b=0;b<a;b++){
        if(f[b]<='z' && f[b]>='a' || f[b]<='Z' && f[b]>='A'){
            c++;
        }else{            
            for(e=b-1;e>=b-c-1;e--){
                cout<<f[e];
            }
            c=0;
            cout<<" ";
        }
        if(b==a-1){
            for(e=b;e>=b-c;e--){
                cout<<f[e];
            }
             cout<<" ";
        }
    }
    return 0;
} 