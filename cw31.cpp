#include<iostream>
using namespace std;

class Complex{
     int a,b;
     public:
     Complex(int X, int Y){
          a = X;
          b = Y;
     }
     Complex(int X){
          a = X;
          b = 0;
     }
     void print(){
          cout<<" your number is "<<a<<" + "<<b<<"i"<<endl;
     }

};

int main(){
     Complex e1(3, 5);
     e1.print();
     Complex e2(7);
     e2.print();

     return 0;
}