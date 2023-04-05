#include<iostream>
using namespace std;

class School{
    int IDcard[80];
    int IName[80];
    int c;
    
    public:
    void ini(){c = 0;}
    void rollnum();
    void DisplayPrice();
    
};

void School :: rollnum(){
    cout<<"Enter student roll num "<<endl;
    cin>>IDcard[c];
    cout<<"Enter id number roll num "<<endl;
    cin>>IName[c];
    c++;
}
void School :: DisplayPrice(){
    for (int i=0; i<c;i++) {
       cout<<"The School student roll num "<<IDcard[i]<<" is "<<IName[i]<<endl;
       
    }
}
int main(){
    School Erok;
    
    Erok.ini();
    Erok.rollnum();
    Erok.rollnum();
    Erok.rollnum();
    Erok.DisplayPrice();
    
    return 0;
    
}