#include<iostream>
using namespace std;

class binary
{

    string S;

   public:
   void read(void);
   void chk_bin(void);
};

void binary :: read(void){
    cout<<"Enter a binary number"<<endl;
    cin>>S;
}
void chk_bin(void){
    for (int i = 0; i <s.length; i++)
    {
        if(s.at(i)!='0'&& s.at(i)!='1'){
            cout<<"incorrect binary format"<<endl;
            exit(0);
        }
    }
      
}
    
    int main(){



    // OOps - Classes and objects

    // C++ --> initially called --> C with classes by stroustroup
    // class --> extension of structures (in C)
    // structures had limitations
    //   - members are public
    //   - no methods
    // classes --> sturcture + more
    // classes --> can have methods and properties 
    // classes --> can make few members as private & few as public
    // structures in c++ are typedefed
       /*class Employee{
            class definition
     } harry, rohan, lovish;*/

    return 0;
}