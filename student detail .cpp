#include<iostream>
#include<string>
using namespace std;
struct student_info{
    string name;
    int age;
    char grade;
};
int main(){

    int d,f,e;
    cout<<"enter total no. of student(there must be at least two stundent) : ";
    cin>>d;
    student_info student[d];
    e=1;
    for(f=0;f<d;f++){ 
        cout<<"enter the detail of"<<e<<" student name,age,grade : ";
        cin>>student[f].name;
        cin>>student[f].age;
        cin>>student[f].grade;
        e++;
    }
    e=1;
    for(f=0;f<d;f++){
        cout<<"student "<<e<<":"<<endl;
        cout<<"name : "<<student[f].name<<endl;
        cout<<"age : "<<student[f].age<<endl;
        cout<<"grade : "<<student[f].grade<<endl;
        e++;
    }
    return 0;
}