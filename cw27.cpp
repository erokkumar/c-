#include<iostream>
using namespace std;

class erok
{
private:
          int a, b, c;
public:
         int d, e;
         void setd(int a1, int b1, int c1);
         void get(){
          cout<<"The value of a is "<<a<<endl;
          cout<<"The value of b is "<<b<<endl;
          cout<<"The value of c is "<<c<<endl;
          cout<<"The value of d is "<<d<<endl;
          cout<<"The value of e is "<<e<<endl;

         }
};

void erok::setd(int a1, int b1, int c1)
{
          a=a1;
          b=b1;
          c=c1;
}
int main(){

erok harry;
harry.d = 54;
harry.e = 66;
harry.setd(3,4,5);
harry.get();
          return 0;
}