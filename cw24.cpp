#include<iostream>
using namespace std;

class Shop{
          int productId[100];
          int ProducctPrice[100];
          int c;

          public:
          void initc(){c = 0;}
          void getprice();
          void DisplayPrice();
};

void Shop :: getprice(){
          cout<<"Enter Id of your item"<<endl;
          cin>>productId[c];
          cout<<"Enter Price of your item"<<endl;
          cin>>ProducctPrice[c];
          c++;
}

void Shop :: DisplayPrice(){
          for (int i = 0; i < c; i++)
          {
                cout<<"The Price of ProductId  "<<productId[i]<<" is "<<ProducctPrice
                [i]<<endl;
          }
          
}

int main(){

Shop Erok;

Erok.initc();
Erok.getprice();
Erok.getprice();
Erok.getprice();
Erok.DisplayPrice();
          return 0;
}