#include<iostream>
using namespace std;

class Animal
{
    private:
    int a, b, c;
    public :
    int d, e, f;
    void Zoo(int a1, int b2, int c3);
    void Zoo2 (){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
        cout<<"The value of f is "<<f<<endl;
    }
};

void Animal :: Zoo(int a1, int b2, int c3){
a = a1;
b = b2;
c = c3;
}

int main(){
    Animal erok;
    // erok ,a = 134; -->This will throw error as a is private
    erok.d = 34;
    erok.e = 45;
    erok.f = 65;
    erok.Zoo(8,7,6);
    erok.Zoo2();
    return 0;
}