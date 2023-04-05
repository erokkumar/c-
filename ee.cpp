#include<iostream>
using namespace std;

class chor{
     private:
     string name, address;
     long long int mob;
     public:

     void in(){
          name="erok";
          address="patna";
          mob=9162702436;
     }
     void ot(){
          cout<<name<<endl;
          cout<<address<<endl;
          cout<<mob<<endl;
     }

};

int main(){
     chor r;
     r.in();
     r.ot();


     return 0;
}