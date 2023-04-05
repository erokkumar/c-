#include<iostream>
using namespace std;

class A{
     public :
     void erok(){
          cout<<"Erok1"<<endl;
     }
};
class B{
     public :
     void erok1(){
          cout<<"Erok2"<<endl;
     }
};
class C : public A,public B{
     public :
};

int main(){
   C c;
   c.erok();
   c.erok1();  

}