#include<iostream>

using namespace std;

int sum (int a, int b, int c){
    int r = a+b-c;
    return r;
}

int main(){
      int num1 , num2 , num3;
      cout<<"enter first number"<<endl;
      cin>>num1;
      cout<<"Enter second number"<<endl;
      cin>>num2;
      cout<<"Enter third number"<<endl;
      cin>>num3;
      cout<< "The total num" <<sum(num1,num2,num3);
    
    return 0;
}