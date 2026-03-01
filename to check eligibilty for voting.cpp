#include <iostream>
using namespace std;
void eligibilt_vote(int );
int main(){
    int a;
    cout<<"enter your age in year :";
    cin>>a;
    eligibilt_vote(a);
   
}
void eligibilt_vote(int a){
     if(a>=18){
        cout<<"you are  eligible to vote";
    }else{
        cout<<"you are not eligible to vote";
    }
}