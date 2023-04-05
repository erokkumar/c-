#include<iostream>
using namespace std;

int main(){

    int a=3;
    int* b= &a;

    cout<<"This address of a is "<<&a<<endl;
    cout<<"This address of a is "<<b<<endl;

    cout<<"This value at address b is "<<*b<<endl;

    return 0;

}