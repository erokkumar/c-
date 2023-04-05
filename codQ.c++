// #include<iostream>
// using namespace std;

// int main(){
//   int a;
//   cin>>a;
//   if ((a+7)>170)
//   {
//     cout<<"yes"<<endl;
//   }
//   else{
//     cout<<"no"<<endl;
//   }
    
// }
// 

// 
#include<iostream>
using namespace std;

int main(){
    int a, sum =0,temp;
    int n;
    cin>>n;
    temp=n;
    while (n>0)
    {
        a=n%10;
        sum=(sum*10)+a;
        n=n/10;
    }
    if (temp==sum)
        cout<<"palindrone number"<<endl;
        else
        cout<<"not"<<endl;
    
    
    

return 0;

}