#include<iostream>
#include<vector>
using namespace std ;
void vectors(){
    int a,c;
      vector<int>integer;
      cout<<"how many element you want to add"<<endl;
      cin>>a;
      cout<<"enter your list"<<endl;
      for(int b=0;b<a;b++){
        
           cin>>c;
           integer.push_back(c);
      }
      cout<<"your list is as follow"<<endl;
      for(int d=0;d<a;d++){
        cout<<integer[d]<<endl;
      }
}
int main () {
    vectors();
    return 0;
}