#include<iostream>
using namespace std;

class Erok{
          int id;
          int gemre;
          public:
          void sId(){
                    gemre =122;
                    cout<<"Enter the  gemer id"<<endl;
                    cin>>id;
          }
          void gId(){
                    cout<<"The id of this gemer"<<endl;
          }
};
int main(){

Erok erok1, erok2, team, ttt;

erok1.sId();
erok1.gId();

          return 0;
}