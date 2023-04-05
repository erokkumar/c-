#include<iostream>
using namespace std;

class A{
     int num,num1,c,n;
     public:
     void person(){
          cout<<"Enter the Two Number"<<endl;
          cin>>num>>num1;
          c=num+num1;
          cout<<"addition = "<<c<<endl;

     }
     void person(int a, int b){
          n=a*b;
          cout<<"Multip = "<<n<<endl;

     }

};

int main(){
     A p;
     p.person();
     p.person(10,4);

     return 0;
}