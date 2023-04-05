#include<iostream>
using namespace std;

class fri
{
private:
     string tv;
public:
     void show(){
          tv="ind vs aus match";
          }
          friend void ankush(fri r);
};
void ankush(fri r){
     cout<<"watching "<<r.tv<<endl;
}

int main(){
     fri b;
     b.show();
     ankush(b);

     return 0;
}