#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    complex(int v1,int v2);
    void display();
    //     cout<<"The value of complex number is: "<<real<<"+ i"<<img<<endl;
    // }
};
complex::complex(int v1=0, int v2=0){   //defining constructor outside the class
    a=v1;
    b=v2;
}
void complex::display(){

    cout<<"The value of complex number is: "<<a<<" + i"<<b<<endl;

}

int main(){
    complex c1(1,2);
    c1.display();
    complex c2(5);
    c2.display();
    complex c3(9,3);
    c3.display();
    
    return 0;
}