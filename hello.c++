#include<iostream>
using namespace std;

// Function prototype


// type function - time -name (arguments)
int sum(int a, int b);
int main() {
    int num1, num2;
     cout<<"Enter first value" <<endl;
     cin>>num1;
     cout<<"Enter second value" <<endl;
     cin>>num2;
     cout<<"the sum is "<<sum(num1,num2) <<endl;

    return 0;
}

int sum(int a , int b){
    int c= a+b;
    return c;
}
