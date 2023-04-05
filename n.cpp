#include<iostream>
#include<fstream>
using namespace std;

int main(){
     ofstream nfile("C:\\Users\\Asus\\Desktop\\CPP.txt");

     cout<<"File created......";
     nfile<<"Cpp Erok..";
     nfile.close();

     return 0;
}