//Question 1:
#include <iostream>
#include <string>
 using namespace std;
 int main(){
    int number;
    int a , b ,c;
    string cammand;
    
    
    do{
    cout<<"         welcome to digit calculatar     "<<endl;
    cout<<"1.ADDITION "<<endl;
    cout<<"2.SUBSTRACTION "<<endl;
    cout<<"3.MULTIPLY "<<endl;
    cout<<"4.DIVISION "<<endl;
   
    cout<<"enter no. of the operation that you want to perform"<<endl;
    cin>>number;
    

    switch(number){
        case 1:
        cout<<"you prefer additon "<<endl;
        cout<<"enter the value of first no. (a)"<<endl;
        cin>>a;
        cout<<"enter the value of second no. (b)"<<endl;
        cin>>b;
        c = a + b;
        cout<<"sum of two number is "<< c <<endl;
        break;
        case 2:
        cout<<"you prefer subtraction "<<endl;
       
       
        cout<<"enter the value of first no. (a)"<<endl;
        cin>>a;
        cout<<"enter the value of second no. (b)"<<endl;
        cin>>b;
        c = a - b;
        cout<<"sub of two number is "<< c <<endl;
        break;
        case 3:
        cout<<"you prefer mutiply "<<endl;
        cout<<"you prefer additon "<<endl;
       
        cout<<"enter the value of first no. (a)"<<endl;
        cin>>a;
        cout<<"enter the value of second no. (b)"<<endl;
        cin>>b;
        c = a * b;
        cout<<"multiply of two number is "<< c<<endl ;
        break;
        case 4:
        cout<<"you prefer division "<<endl;
        
       
        cout<<"enter the value of first no. (a)"<<endl;
        cin>>a;
        cout<<"enter the value of second no. (b)"<<endl;
        cin>>b;
        if(b == 0){
            cout<<"not valide"<<endl;
            
        }else{
        c = a / b;
        
        cout<<"sum of two number is "<< c<<endl ;
        }
        break ;
        default:
        cout<<"you enter wrong number"<<endl;
    }
    cout<<"enter yes if you want to do operation or no to quit"<<endl;
    cin>>cammand;
     
   
     }while(cammand=="yes");
     return 0;
 
 }