#include<iostream>
using namespace std;

class complex{
     int a,b;
     public:

     complex();
     void print(){
          cout<<"your number is  "<<a<<" + "<<b<<"i"<<endl;
     }

};
complex :: complex(){
      a =5;
      b =8;
}

int main(){
     complex Erok;
     Erok.print();

     return 0;
}