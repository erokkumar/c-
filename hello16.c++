// question
// 2
//  0 2
//  2 0 2
//  0 2 0 2
//  2 0 2 0 2
//  0 2 0 2 0 2

// #include<iostream>
// using namespace std;

// int main(){
//   int n;
//   cin>>n;
  
//   for (int i = 0; i <=n; i++)
//   {
//     for (int j = 0; j <=i; j++)
//     {
//       if ((i+j)%2==0)
//       {
//         cout<<" 2";
//       }
//       else{
//         cout<<" 0";
//       }
      
//     }
//     cout<<endl;
//   }
  
//   return 0;
// }

#include<iostream>
using namespace std;

int main(){

  int n;
  cin>>n;

  for (int i = 1; i <=n; i++)
  {
    for (int j = 1; j <=i; j++)
    {
      if ((i+j)%2==0)
      {
        cout<<" *";
      }
      else{
        cout<<" *";
      }
      
    }
    cout<<endl;
  }
  

  return 0;
}
