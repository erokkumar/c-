#include<iostream>
using namespace std;
class complex{
     int a,b;
     public:

     complex(int a , int b);
     void print(){
          cout<<"your number is  "<<a<<" + "<<b<<"i"<<endl;
     }

};
complex :: complex(int X, int Y){
      a =X;
      b =Y;
}

int main(){
     complex Erok(6, 9);
     Erok.print();
     complex Eroka(7, 4);
     Erok.print();

     return 0;
}