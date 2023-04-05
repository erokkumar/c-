#include<iostream>
using namespace std;

int main(){
     int t;
     cin>>t;
     while (t--)
     {
          int a,b,c;
          int sum1, sum2,sum3;
          cin>>a>>b>>c;
          sum1 = a+b;
          sum2 = b+c;
          sum3 = c+a;
          if (sum1 == c || sum2 == a || sum3 == b)
          {
               cout<<"YES"<<endl;
          }
          else{
               cout<<"NO"<<endl;
          }
          

     }
     
}