#include<iostream>
using namespace std;

class Eschool{
     private:
     int id;
     

     public:
        void setd(){
          cout<<"Enter the Id "<<endl;
          cin>>id;
        }

        void getd(){
          cout<<"your id number "<<id<<endl;
        }
};
int main(){
     Eschool Erok,Manish,Erok2,Erok3;
     Erok.setd();
     Erok.getd();

     Erok2.setd();
     Erok2.getd();

     Erok3.setd();
     Erok3.getd();

     Manish.setd();
     Manish.getd();

     return 0;
}