#include <iostream>

using namespace std;

struct employee
{
    int eid;
    char favchar;
    float salary;
  
};

int main()
{
   struct employee rohit;
   
   rohit.eid = 1;
   rohit.favchar = 'c';
   rohit.salary = 120000000;
   cout<<"this vale is "<<rohit.eid<<endl;
   cout<<"this vale is "<<rohit.favchar<<endl;
   cout<<"this vale is "<<rohit.salary<<endl;

    return 0;
}