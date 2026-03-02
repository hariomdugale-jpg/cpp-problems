#include<iostream>
#include<fstream>
#include<string>
using namespace std ;

int main (){
    int a,b,e,f;
    string c,d;

    ofstream my_file;
    my_file.open("text1.txt");
    my_file<<"name of student |"<<"class  | \t "<<"age"<<endl;
    cout<<"enter no. of student = ";
    cin>>a;
    for(b=1;b<=a;b++){
        cout<<"enter the name of "<<b<<"  student :";
        cin>>c;
        cout<<"enter the class of "<<b<<"  student :";
        cin>>e;
        cout<<"enter the age  of "<<b<<"  student :";
        cin>>f;
        my_file<<c<<"          | \t "<<e<<" |  "<<f<<endl;




    }
    my_file.close();



    
}