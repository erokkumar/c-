// #include<iostream>
// using namespace std;

// int main(){

//      char button;
//      cout<<"Enter a character :- "<<endl;
//      cin>>button;

//     if (button=='a')
//     {
//         cout<<"Erok"<<endl;
//     }
//     else if (button=='b')
//     {
//         cout<<"Rohit"<<endl;
//     }
//     else if (button=='c')
//     {
//         cout<<"hello"<<endl;
//     }
//     else if (button=='d')
//     {
//         cout<<"kuki"<<endl;;
//     }

// switch stetment

//

// #include<iostream>
// using namespace std;

// int main(){

//     int n1,n2;
//     cout<<"Enter the two number";
//     cin>>n1>>n2;

//     char op;
//     cout<<"Enter an oprator";
//     cin>>op;

//     switch (op)
//     {

//     case '+':
//         cout<<n1+n2<<endl;
//         break;

//         case '-':
//         cout<<n1-n2<<endl;
//         break;

//         case '*':
//         cout<<n1*n2<<endl;
//         break;

//         case '/':
//         cout<<n1/n2<<endl;
//         break;

//     default:
//     cout<<"Enter another number"<<endl;
//         break;
//     }

//     return 0;
// }

#include<iostream>
using namespace std;

int main(){

    int m , k;
    cin>>m>>k;

  for (int i = 1; i <=m; i++)
  {
    for (int i = 1; i <=k; i++){
        cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}