#include<iostream>
using namespace std;

class Employee
{
private:
     int id;
     int salary;
public:
     void seti(){
          salary =134;
          cout<<"Enter the Id of Employee"<<endl;
          cin>>id;
     }
     void geti(){
          cout<<"The id of this employee "<< id <<" , Salary = "<<salary<<endl;
          
     }
};

int main(){

     Employee fb[5];
     for (int i = 0; i <5; i++)
     {
          fb[i].seti();
          fb[i].geti();
     }
     


     return 0;
}