#include<iostream>
using namespace std ;
class Shape{
    public :
    virtual int area_Rectangle()=0;
    virtual float  area_triangle()=0;
    
    };
class rectangle : public Shape{
  public :
    int area_Rectangle(){
        int a,b;
        cout<<"enter the value of length : ";
        cin>>a;
        cout<<"enter the value of brigth : ";
        cin>>b;
        cout<<"are of rectrangle is : "<<a*b<<endl;
        return 0;
    }
    float area_triangle() {
        return 0;   
    }

};
class triangle : public Shape{
  public :
      int area_Rectangle(){
        return 0;   
      };
     float area_triangle(){
        float a,b;
        cout<<"enter the value of base : ";
        cin>>a;
        cout<<"enter the value of heigth : ";
        cin>>b;
        cout<<"area of triangle is : "<<a*b*0.5<<endl;
        return 0;
     }
    
};
    
int main(){
    triangle y;
    rectangle x;
    x.area_Rectangle();
    y.area_triangle();
    return 0;
}