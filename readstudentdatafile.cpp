#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ifstream my_file;
    string a;
    my_file.open("text1.txt");
    while(!my_file.eof()){
          my_file>>a;
          cout<<a;
    }
    my_file.close();

}