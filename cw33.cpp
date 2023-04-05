#include<iostream>
using namespace std;

class Compond{
     int principal;
     int year;
     float rate;
     float returnvalue;
     
     public :

         Compond(){}
         Compond(int p, int y, float r); //r can be a value like 0.04
         Compond(int p, int y, int r); // r can be a value like 14
         void Show();
};

       Compond ::Compond(int p, int y, float r){
          principal = p;
          year = y;
          rate = r;
          returnvalue = principal;
          for (int i = 0; i < y; i++)
          {
              returnvalue = returnvalue * (1+rate); 
          }
          
       }
       Compond ::Compond(int p, int y, int r){
          principal = p;
          year = y;
          rate =float(r)/100;
          returnvalue = principal;
          for (int i = 0; i < y; i++)
          {
              returnvalue = returnvalue * (1+rate); 
          }

       }
      void Compond :: Show(){
          cout<<endl<<"Principal amount was "<< principal
          << ". Return value after "<<year
          <<" is "<<returnvalue<<endl;
      }
       

int main(){
     Compond c1, c2, c3;
     int p , y;
     float r;
     int R;

     cout<<" Enter the value of p y and r"<<endl;
     cin>>p>>y>>r;
     c1 = Compond(p,y,r);
     c1.Show();

     cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    c2 = Compond(p, y, R);
    c2.Show();

     return 0;
}