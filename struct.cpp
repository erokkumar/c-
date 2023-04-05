#include<iostream>
using namespace std;

struct erok
{
     int roll;
     char name[20];
     float marks;
};


int main(){

     struct erok s;

     cout<<"Enter The Student Name: "<<endl;
     cin>>s.name;
     cout<<"Enter Student Roll number: "<<endl;
     cin>>s.roll;
     cout<<"Enter The student Marks: "<<endl;
     cin>>s.marks;

     cout<<s.name<<" "<<s.roll<<" "<<s.marks<<endl;
     return 0;
}