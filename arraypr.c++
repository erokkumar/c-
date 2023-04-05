#include<iostream>
using namespace std;

class Store 

{
    private :
    int a, b , c;

    public :
    int d , e;

    void produ(int a7 , int b9 , int c8);
    void product(){
        cout<<"this is value of a is "<<a<<endl;
        cout<<"this is value of b is "<<b<<endl;
        cout<<"this is value of c is "<<c<<endl;
        cout<<"this is value of d is "<<d<<endl;
        cout<<"this is value of e is "<<e<<endl;
    }


};

void Store :: produ(int a7, int b9, int c8){
    a = a7;
    b = b9;
    c = c8;
}


int main(){
    Store erok;
    erok.d = 45;
    erok.e = 36;
    erok.produ(8,7,6);
    erok.product();

    return 0;
}